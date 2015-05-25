#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("cls091.in");

	int n,m;
	f >> n >> m;

	int mat[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			f >> mat[i][j];
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	int colStop; 				// la ce coloana sa ma opresc
	if (m%2  == 0){
		colStop  = m -2;
	}
	else {
		colStop = m;			//coloane impare
	}

	for(int j = 0 ; j< colStop; j++){

		if (j % 2 == 0){				//cobor
			for(int i = 0; i<n; i++){
				cout << i+1 << " " << j+1 << "\n";
			}
		else{							//urc
			for(int j = n-1; j >=0; j--){
				cout << i+1 << " " << j+1 << "\n";
			}
		}
	}
	
	if (m%2  != 0){	//coloane impare
		cout << "gata"
	}
	else {

		
	}
}