#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){

	fstream f("P104_20.in");

	int n[100];
	int p=32,k=0;
	for(int i=0;p!=0;i++){
		f >> p;
		if(p==0)
			break;
		else{
			n[i]=p;
			k++;
		}
	}
	


	for(int i=0; i<k-1;i++){
		if(n[i]*2==n[i+1])
			cout << '(' << n[i] << ',' << n[i+1] << ") ";
	}

	cout << "\nVarianta fara sir:\n";
	f.clear();
	f.seekp( 0, std::ios::beg);	//deplasare la inceputul fisierului a pointer-ului de citire

	int ultimulNrCitit = 0 ;
	int nr;
	while(1){
		f >> nr;
		if(nr == 0) break;
		if (ultimulNrCitit * 2 == nr) cout << '(' << ultimulNrCitit << ',' << nr << ") ";

		ultimulNrCitit = nr;
	}

	return 0;
	
}