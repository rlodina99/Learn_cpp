#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P109_48.in");
	


	int x=1,y=2,maxtot=0,max=0;

	
	while(x!=0 && x!=0){
		f >> x;
		if(x>max)
			max=x;
		if(x>maxtot)
			maxtot=x;
		f >> y;
		if(y>max)
			max=y;
		if(y>maxtot)
			maxtot=y;
		if(x==0 || y==0){
			if(max!=0)
				cout << max << ' ';
			max=0;
		}
	}
	cout << endl << maxtot;



	return 0;
	
}