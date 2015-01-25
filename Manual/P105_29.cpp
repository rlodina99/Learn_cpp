#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P105_29.in");
	int n,m,ok=1,k;
	f >> n;
	m=n;
	k=n%10;
	while(m){
		cout << m%10 << ' ';
		if(k!=m%10){
			ok=0;
			break;
		}
		m=m/10;
	}
	if(ok==1)
		cout << "DA";
	else
		cout << "NU";



	return 0;
	
}