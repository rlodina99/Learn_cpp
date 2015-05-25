#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string coduri[] = {	// .=1, -=111
	"10111"           	,//A : .-
	"111010101",		///B - . . .
	"1110111101"		,//C - . - .
	"1110101"				, //D - . .
	"1"					, //E .
	"101011101"				, //F . . - .
	"111011101"				, //G - - .
	"1010101"				, //H . . . .
	"101"					, //I . .
	"1011101110111"				, // J . - - -
	"111010111"				, // K - . -
	"101110101"				, // L . - . .
	"1110111"				, // M - -
	"11101"				, // N - .
	"11101110111"				, // O - - -
	"10111011101"				, // P . - - .
	"1110111010111"				, // Q - - . -
	"1011101"				, // R . - .
	"10101"				, // . . .
	"111"				, // T -
	"1010111"				, // U . . -
	"101010111"				, // V . . . –
	"101110111"				, // W . - -
	"11101010111"				, // X - . . -
	"1110101110111"				, // Y - . - -
	"11101110101"				, // Z - - . .
};

const int nrCoduri = 25;

char decode(string cod){
	for(int i=0;i<nrCoduri;i++){
		if(coduri[i]==cod)
			return (char)(65+i);
	}

	return '?';
}


int main(){

	ifstream f("iasi_p1.in");
	
	
	int n=0;
	string linii[100];
	string l;
	while(1) {		
		getline(f, l);
		if (f.eof()) 
			break;
		linii[n] = l;		
		n++;

		cout << l << "\n";
	}
	 for(int i=0;i<n;i++){
	 	l=linii[i];
	 	int incepe,seTermina;
	 	int cuvant=0;
	 	int cifre=l.length();
	 	for(int j=0;j<cifre;j++){
	 		if(l[j] != '0' && cuvant==0){
	 			incepe=j;
	 			cuvant=1;
	 		}
	 		if(l[j]=='0' && l[j+1]=='0' && l[j+2]=='0'){
	 			seTermina=j-1;
	 			cuvant=0;
	 			if(l[incepe]!='0'){
	 				cout << incepe << ' ' << seTermina;
	 				//cout << decode(l.substr(incepe,seTermina-incepe));
	 			}
	 		}
	 	}
	 }


	return 0;
} 