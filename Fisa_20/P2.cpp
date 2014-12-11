#include <iostream>
#include <fstream>
using namespace std;

// determinati daca numerele sunt in ordine crescatoare

void versiuneMaiBuna(){
	ifstream f("P2.in");
	int x1, x2, ok = 1;
	do {
		f >> x1;
		if (x1 == 0) break;
		f >> x2;
		if (x1 > x2){
			ok = 0;
			break;
		}

	} while (1);
	cout << "sir " << (ok ? "crescator" : "aiurea  ") << endl;
}

int main(){
	// versiuneMaiBuna();
	// return 0;

	ifstream f("P2.in");
	int x,x1;
	f >> x;
	f >> x1;
	while(x<x1 && x!=0 && x1!=0){
		f >> x;
		f >> x1;

	}
	if (x==0 || x1==0)
		cout  << "Nr cresc";
	else
		cout << "NU";
	return 0;
}