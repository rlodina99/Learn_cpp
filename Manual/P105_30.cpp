#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int myPow(int a, int b){
	int p=1;
	for(int i=0;i<b;i++)
		p=p*a;
	return p;
}

int main(){
	fstream f("P105_30.in");
	
	int n,m,k,x,cif=0;
	f >> n;
	f >> k;
	m=n;
	while(m){
		cif++;
		m=m/10;
	}

	if(k>cif)
		cout << "IMPOSIBIL";
	else
	{
		cout << n%myPow(10,cif-k) << endl;
	}
	
	return 0;
	
}