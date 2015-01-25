#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P105_31.in");
	int n,c,u,k=0;
	f >> n;
	f >> c;
	
	while(n){
		u=n%10;
		if(u>=c-1 && u<=c+1)
			k++;
		n=n/10;
	}
	cout << k;
	return 0;
	
}