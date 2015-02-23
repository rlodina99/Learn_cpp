#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

	ifstream f("Ecgr2.in");

	int a,b,c,delta,x1,x2;
	f >> a >> b >> c;

	delta=b*b-(4*a*c);

	x1=(-b-sqrt(delta))/2*a;
	x2=(-b+sqrt(delta))/2*a;
	cout << x1 << ' ' << x2;
	
}