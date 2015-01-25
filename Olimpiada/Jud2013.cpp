#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
	ifstream f("Jud2013.in");
	int n;		//nr de cladiri
	f >> n;

	int a[n];

	for(int i=0;i<n;i++){
		f >> a[i];
		cout << a[i] << ' ';
	}
	int aux,max=0;
	for(int i=0;i<n;i++){
		aux=a[i];
		while(aux!=0){
			if(aux%10>max)
				max=aux%10;
			aux=aux/10;
		}
	}

	cout << endl << max << ' ';
	int nr=0;
	for(int i=0;i<n;i++){
		aux=a[i];
		while(aux!=0){
			if(aux%10==max){
				nr++;
				break;
			}
			aux=aux/10;
		}
	}
	cout << nr << endl;
	int NrInvers=0,Oglinzi=0;
	for(int i=0;i<n;i++){
		aux=a[i];
		NrInvers=0;
		while(aux!=0){
			NrInvers=NrInvers*10+aux%10;		
			aux=aux/10;
		}
		cout << NrInvers << ' ';
		if(NrInvers==a[i])
			Oglinzi++;
	}
	cout << endl << Oglinzi << endl << endl;

	int cuburi=0;
	int cifre=0;
	for(int i=0;i<n;i++){
		cifre=0;
		NrInvers=0;
		aux=a[i];
		while(aux!=0){
			cifre++;
			NrInvers=NrInvers*10+aux%10;
			aux=aux/10;
		}
		int b[cifre];
		for(int i=0; i<cifre; i++){
			b[i]=NrInvers%10;
			NrInvers=NrInvers/10;
		}
		
		for(int i=0;i<cifre/2;i++){
			cout << b[i] << ' ' << b[cifre-i-1] << endl << endl;
			if(b[i] > b[cifre-i-1])
				cuburi+=b[i] - b[cifre-i-1];
			else
				cuburi+=b[cifre-i-1] - b[i];

		}
	}

	cout << cuburi;
}