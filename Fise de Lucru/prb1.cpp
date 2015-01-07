#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("prb1.in");

	int n,x,x1,x2,b=0;

	f >> n;

	while(n!=0){
		f >> x;
		x1=x;
		x2=0;
		while(x!=0){
			x2=x2*10+x%10;
			x=x/10;
		}
		if(x1==x2)
			b++;
		n--;
	}


	cout << b;



		return 0;
}