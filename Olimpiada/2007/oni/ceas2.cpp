#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
	ifstream f("ceas2.in");

	int h1,m1,h2,m2;
	f >> h1 >> m1 >> h2 >> m2;

	while(h2>0 || m2>0){
		m2--;
		if(m2==0 && h2!=0){
			h2--;
			m2=60;
		}
		if((h1==1 &&m1==5) || (h1==2 &&m1==10) || (h1==3 &&m1==15) || (h1==4 &&m1==20) || (h1==5 &&m1==25) || 
			(h1==6 &&m1==30) || (h1==7 &&m1==35) || (h1==8 &&m1==40) || (h1==9 &&m1==45) || (h1==10 &&m1==50) || 
			(h1==11 &&m1==55) || (h1==12 &&m1==00)){
			m2-=5;
			cout << '5';
		}
		
		m1++;
		if(m1==60){
			m1=0;
			h1++;
		}
	}
	cout << '\n';
	cout << h1 << ' ' << m1;

	return 0;
}