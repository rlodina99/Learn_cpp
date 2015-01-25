#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P104_26.in");
	
	int a,b,a1,a2,k=0;
	f >> a >> b;

	int A = a;
	int B =b;

	a1=a;
	a2=a;
	while(a1!=0){
		k++;
		a1=a1/10;
	}
	cout << a << ' ' << k << endl;

	if(k<b)
		cout << "Datele introduse nu verifica conditia problemei!";
	
	
	int s=0;
	while(b!=0){
		s=s*10+a2%10;
		a2=a2/10;
		b--;
	}
	cout << s;
	int x=0;
	while(s!=0){
		x=x*10+s%10;
		s=s/10;
	}
	cout << endl << x << endl;

	cout << a-x;
	
	cout << endl << "Versiunea tata" << endl;
	int i = B;
	while(i){
		A=A/10;
		i--;	
	}

	cout << A;
	
	while(B){
		A=A*10;
		B--;	
	}

	cout << endl << A;
	return 0;
	
}