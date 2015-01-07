#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P24.in");

	int n,m;
	f >> n;
	
	int a[n];
	cout << "Primul sir" << endl;
	for (int i=0; i<n; i++){
		f>> a[i];
		cout << a[i] << ' ';
	}
	cout<< endl;

	f >> m;
	int b[m];
	cout << "Al doilea sir" << endl;
	for (int i=0; i<m; i++){
		f >> b[i];
		cout << b[i] << ' ';
	}
	cout << endl;
	cout << endl;
	int max=0;
	for(int i=0; i<n; i++){
		if(a[i]>max)
			max=a[i];
	}

	for(int i=0; i<m; i++){
		if(b[i]==max)
			cout << "Maximul din A adica " << max << " se gaseste in B pe pozitia " << i+1 << "  " ;
	}

return 0;
}