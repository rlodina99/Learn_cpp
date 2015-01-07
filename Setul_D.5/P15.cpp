#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P15.in");

	int n;
	f >> n;
	int a[n];
	cout << "sirul; original" << endl;
	for (int i=0; i<n; i++){
		f>> a[i];
		cout << a[i] << ' ';
	}
	cout<< endl;

	int b[n];
	for (int i=0; i<n; i++){
		b[n-1-i]=a[i];
	}

	int aux;
	for (int i=0; i<n; i++){
		aux=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=aux;

	}

	cout << "sirul a" << endl;
	for (int i=0; i<n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;

	cout  << "sirul b" << endl;
	for (int i=0; i<n; i++){
		cout << b[i] << ' ';
	}





	return 0;
}