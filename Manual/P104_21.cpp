#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P104_21.in");
	
	int n;
	f >> n;
	int s=0,p1=1;
	int k=1;

	while(k<=(3*n-2)){
		s+=pow(k,2);
		k=k+3;
	}
	cout << "E1 = " << s << endl ;

	for(int i=1;i<=2*n-1;i+=2){
		p1=i*p1;
	}
	cout << "E2 = " << p1 << endl ;


	int p2=1,s2=0;
	for(int i=1;i<=n;i++){
		p2=1;
		for(int j=1;j<=i;j++){
			p2=p2*j;
		}
		s2+=p2;
	}
	cout << "E2 = " << s2 << endl ;

	return 0;
	
}