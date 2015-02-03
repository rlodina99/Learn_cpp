#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P343_45.in");

	//sirul a 
	int a_cifre; 		//nr de elemente al sirului a
	f >> a_cifre;
	int a[a_cifre];		//primul sir
	for(int i=0;i<a_cifre;i++){
		f >> a[i];
		cout << a[i] << ' ';
	}
	cout << "\n";
	
	//sirul b
	int b_cifre; 		//nr de elemente al celui de-al 2-lea sir  a
	f >> b_cifre;
	int b[b_cifre];		//al 2-lea sir sir
	for(int i=0;i<b_cifre;i++){
		f >> b[i];
		cout << b[i] << ' ';
	}
	cout << "\n";

	int max_cifre = a_cifre > b_cifre ? a_cifre : b_cifre;
	int rez[max_cifre + 1];

	int s;				//suma cifrelor de pe pozitia i

	int nrReportat;		//nr de tinut minte daca x+y > 10

	for(int i=0; i< max_cifre; i++){
		s = 0;
		nrReportat =0;
		if (i < a_cifre) s += a[i];
		if (i < b_cifre) s += b[i];

		rez[i] = s % 10  + nrReportat;
		if (s>10){			
			nrReportat = s - (s%10);
		}
		
	}

	for (int i = 0; i < max_cifre; ++i){
		cout << rez[i] << ' ';
	}
	return 0;
	
}