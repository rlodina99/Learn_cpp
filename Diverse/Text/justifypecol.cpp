#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
	ifstream f("justify.in");
	char c;
	int nrChar = 0;
	int nrCuvinte = 0;
	int suntInCitireaUnuiCuvant = 0;
	string arr[100];
	int n;
	f >> n;
	while (f.get(c)){
	    cout << c;
		if (isspace(c)){			//spatiu, tab, enter, 
			if (suntInCitireaUnuiCuvant){
				//cout << '\n' << cuvant;
				nrCuvinte++;
				suntInCitireaUnuiCuvant = 0;
			}
			else {
				//nu face nimic - citeste toate spatiile dintre cuvinte
			}
		}
		else {
			arr[nrCuvinte] +=c;				//concatenare caracter citit 
			suntInCitireaUnuiCuvant  = 1;
			nrChar ++;
		}
		
	}

	cout << "\n\n Nr caractere:" << nrChar;
	cout << "\n nr. cuvinte:" << nrCuvinte ;
	cout << "\n Justify pe " << n << " caractere";

	cout << "\n"; 
	for (int i=0; i<n; i++) 
		cout << '.';
	cout << "|" << n << '\n';


	//arr - vector de tip string cu cuvintele
	//nrCuvinte - int - 
	//n - dimensiunea pe care trebuie formatat textul
	///tip s.length() 	- 

	int idxStart = 0;		//indexul primului cuvant de pe linie
	int idxEnd = 0;			//indexul ultimului cuvant de pe linie
	int charsPerLine = 0;	//nr de caractere de pe linia curenta
	int idx=0;

	while(idx < nrCuvinte){	

		if ( (charsPerLine + arr[idx].length() + 1) < n ) {
			charsPerLine += arr[idx].length() + 1;
		}
		else {
			cout << '\n' << charsPerLine;
			idxEnd = idx;
			for(int i = idxStart; i< idxEnd; i++){
				cout << arr[i];
				if (i<idxEnd-1) cout  << ' ';
			}			
			cout << '\n';
			idxStart = idxEnd;
			charsPerLine = 0;
		}
		
		idx++;
	}
	if (charsPerLine > 0){
		for(int i = idxStart; i< n; i++){
				cout << arr[i] << ' ';
			}			
			cout << '\n';
	}

	// int litere=0;
	// int cuvinte=0;
	// for(int i=0;i<nrCuvinte;i++){
	// 	int nrSpati=0;
	// 	int nrLitere=0;
	// 	for(int j=0;j<nrCuvinte;j++){
	// 		if(nrLitere+arr[j].length()<n){
	// 			nrLitere+=arr[j].length();
	// 			nrLitere++;
	// 		}
	// 	}
	// 	if(litere+arr[i].length()<n){
	// 		litere+=arr[i].length();
	// 		litere++;
	// 		cout << arr[i];
	// 		nrSpati=(n-nrLitere)/(cuvinte-1);
	// 		while(nrSpati){
	// 			cout << ' ';
	// 			nrSpati--;
	// 		}
	// 	}
	// 	else{
	// 		cout << '\n';
	// 		litere=0;
	// 	}
	// }
	

return 0;	
}
