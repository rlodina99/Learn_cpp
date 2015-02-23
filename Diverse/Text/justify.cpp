#include <iostream>
#include <fstream>


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

	int nrSpati=(n-nrChar)/nrCuvinte;

	cout << "\n adaug " << nrSpati << " spatii intre cuvinte";
	cout << "\n\n";

	

	for(int i=0;i<nrCuvinte;i++){
		cout << arr[i];
		for(int j=nrSpati;j!=0;j--){
			cout << ' ';
		}
	}

return 0;	
}
