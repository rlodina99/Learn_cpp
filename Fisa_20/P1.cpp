#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P1.in");
	int x,p=0,i=0;
	do {
		f >> x;
		if(x%2==0)
			p=p+x;
		else
			i=i+x;
	}
	while (x!=0);

	cout << "Suma pare= " << p << endl 
		 << "Suma impare=" << i;

	return 0;
}