#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P105_27.in");
	int n,m,k=0,p=0;
	f >> n;

	m=n;

	while(m){
		k++;
		p=m%10;
		m=m/10;
	}
	int a=0;
	a=pow(10,k-1)*p;
	
	cout << endl << (n-a)/10;
	return 0;
	
}