#include <iostream>
#include <fstream>

using namespace std;

int main(){


	int n =15;
	
	int a=1,u1,u2,suma=0;
	for(int i=0;i<n;i++){
		int aux=i+1;
		while(aux){
			if(i==n-1 && aux==i+1)
				u1=a;
			if(i==n-1 && aux==1)
				u2=a;
			cout  << a << ' ';
			suma+=a;
			a+=2;
			aux--;
		}
		cout << '\n';
	}
	cout << "linia " << n << " incepe cu " << u1 << " si se termina cu " << u2 << '\n';

	for(int i=1;i<suma/3;i++){
		if(i*i*i==suma)
			cout << "Suma termenilor de pe orice linie este un cub perfect!";
	}
	
	int k=12,sumaK=0;
	a=1;
	for(int i=0;i<n;i++){
		int aux=i+1;
		while(aux){
			if(k==i+1)
				sumaK+=a;
			a+=2;
			aux--;
		}
	}
	cout << "\nSuma k= " << sumaK << '\n';
	for(int i=1;i<suma/3;i++){
		if(i*i*i==sumaK)
			cout << "Suma termenilor de pe linia K= " << k <<" este un cub perfect!  " <<i;
	}
}