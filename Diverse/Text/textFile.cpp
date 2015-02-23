#include <iostream>
#include <fstream>


using namespace std;

int main(){
	ifstream f("textFile.txt");
	char c;
	int nrChar = 0;
	int nrCuvinte = 0;
	int suntInCitireaUnuiCuvant = 0;
	string cuvant;
	while (!f.eof()){
		f.get(c);
	    cout << c;
		if (isspace(c)){			//spatiu, tab, enter, 
			if (suntInCitireaUnuiCuvant){
				cout << '\n' << cuvant;
				cuvant = "";
				nrCuvinte++;
				suntInCitireaUnuiCuvant = 0;
			}
			else {
				//nu face nimic - citeste toate spatiile dintre cuvinte
			}
		}
		else {
			cuvant +=c;				//concatenare caracter citit 
			suntInCitireaUnuiCuvant  = 1;
		}
		nrChar ++;
	}

	cout << "\n\n Nr caractere:" << nrChar;
	cout << "\n nr. cuvinte:" << nrCuvinte;
	return 0;	
}
