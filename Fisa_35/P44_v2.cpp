#include <iostream>
#include <fstream>

using namespace std;

int getNrPrim(int nr, int increment){
	int ok =0;
	do {
		nr += increment;
		ok = 0;
		for(int i = nr; i>0; i--){
			if ( nr%i == 0) ok++;
		}
	}while(ok != 2);

	return nr;
}

int main(){
	ifstream f("P44.in");
    
    int x;
    f >> x;
   
    int p1 = getNrPrim(x, -1);
    int p2 = getNrPrim(x, 1);

    int d1 = x - p1;
    int d2 = p2 - x;

    if (d1 == d2)
    	cout << p1 << ' ' << p2;
    else
    	cout << (d1 > d2 ? p2 : p1);

}