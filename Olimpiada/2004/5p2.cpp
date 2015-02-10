#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream f("5p2.in");
	int h,n,a,v1=0,cifs=0,cifz=0;

	f >> h >> n;
	int sute=h/100%10;
	int zeci=h/10%10;
	while(n){
		f >> a;
		if(h==a)
			v1++;
		if(a/100%10==sute)
			cifs++;
		if(a/10%10==zeci)
			cifz++;
		n--;
	}

	if(v1!=0)
		cout << "DA" << endl;
	else
		cout << "NU" << endl;
	cout << cifs << endl << cifz;
	

	return 0;
	
}