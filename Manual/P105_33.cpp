#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
double myPow(int a, int b){
	int p=1;
	for(int i=0;i<b;i++)
		p=p*a;
	return p;
}

int main(){
	fstream f("P105_33.in");
	int x,y,k,z=0,cif=0;
	
	f>> x;
	f >> y;

	k=y;
	while(k){
		z++;
		k=k/10;
	}
	cif=x*myPow(10,z)+y;
	cout << cif/myPow(10,z);

	return 0;
	
}