#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int consum(int nr){
	int c = 0;
	while(nr){
		int u=nr%10;
		if(u==1)
			c+=2;
		else if(u==2)
			c+=5;
		else if(u==3)
			c+=5;
		else if(u==4)
			c+=4;
		else if(u==5)
			c+=5;
		else if(u==6)
			c+=6;
		else if(u==7)
			c+=3;
		else if(u==8)
			c+=7;
		else if(u==9)
			c+=6;

		nr=nr/10;
	}

	return c;
}


int main(){
	ifstream f("7segmente.in");
	int n,m,s=0,p;
	f >> n;
	f >> p;
	m=n;
	while(m){
		int u=m%10;
		if(u==1)
			s+=2;
		if(u==2)
			s+=5;
		if(u==3)
			s+=5;
		if(u==4)
			s+=4;
		if(u==5)
			s+=5;
		if(u==6)
			s+=6;
		if(u==7)
			s+=3;
		if(u==8)
			s+=7;
		if(u==9)
			s+=6;
		m=m/10;
	}
	cout << s << "\n";

	int x,k=99999;
	while(k>p){
		x=n;
		k=0;
		while(x){
			int u=x%10;
			if(u==0){
				k+=9999;
			    break;
			}
			if(u==1)
				k+=2;
			if(u==2)
				k+=5;
			if(u==3)
				k+=5;
			if(u==4)
				k+=4;
			if(u==5)
				k+=5;
			if(u==6)
				k+=6;
			if(u==7)
				k+=3;
			if(u==8)
				k+=7;
			if(u==9)
				k+=6;
			x=x/10;
		}
		
		if(k<=p){
			cout << n;
			break;
		}
		n--;
	}

	cout << "\nVarianta B\n";
	f.close();
	f.open("7segmente.in");


	f >> n >> p;
	cout << consum(n);
	while(n){
		int c = consum(n);		
		if (c<=p) {
			cout << ' ' << n;
			break;			
		}
		n--;
		

		int y=n;
		int i=0;
		while(n>0){
			y=n;
			i=0;
			while(y){
				if(y%10 == 0){
					i=1;
					//break;
				}
				y=y/10;
			}
			if(i==0)
				break;
			n--;
		}
		
		cout << '\n' << n << '\n';

	}
	return 0;
}
