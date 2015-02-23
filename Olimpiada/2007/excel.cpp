#include <iostream>
#include <fstream>
#include <stdlib.h>  

using namespace std;

int main(){
	ifstream f("excel.in");
	int m; 		//nr coloane
	f >> m;
	int n; 		//nr linii
	f >> n;

	string arr[n][m];

	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			f >> arr[i][j];
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	int rez[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			rez[i][j]=0;
		}
	}

	int idx, linie, col;
	string strLinie;

	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			
			string formula = arr[i][j];		//=A1+A1 sau =A12+A15 sau =A12+A5 sau =A5+A12 sau =A9 sau =A19
		
			if (formula[0] == '='){ //formula

				col =  ((int) formula[1]) - 65;	// index coloana :: ASCII A=65, B=66, C=67

				//determinare index linie
				idx = 2;
				strLinie = "";
				strLinie += formula[idx];
				if (formula.length() > 3 && formula[3] != '+'){
					idx++;
					strLinie += formula[idx];
				}

				linie = atoi(strLinie.c_str())  - 1;	

				idx ++;								// formula[idx] = '+'

				if (idx < formula.length()) {		//formula cu 2 termeni =A12+A14
					rez[i][j] = atoi(arr[linie][col].c_str());	//primul operand
					idx ++;							//trecem la a-l doilea operand

					col =  ((int) formula[idx]) - 65;	// index coloana :: ASCII A=65, B=66, C=67

					strLinie = "";
					strLinie += formula[idx];
					idx++;
					if (idx < formula.length()){
						strLinie += formula[idx];
					}

					linie = atoi(strLinie.c_str())  - 1;

					rez[i][j] += atoi(arr[linie][col].c_str());	//adunam al 2-lea operand
				}
				else {								//formula cu un termen =A22 sau =A9
					rez[i][j]  = atoi(arr[linie][col].c_str());
				}
				
			}
			else {	//numar aplic atoi
				rez[i][j]=atoi(arr[i][j].c_str());
			}

		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << rez[i][j] << ' ';
		}
		cout << '\n';
	}
  return 0;
}