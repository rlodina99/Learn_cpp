#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>

using namespace std;

int CalculDistanta(int aX, int aY, int bX, int bY){

	int l = 0;

	if(aY == bY){
		l  = abs(aX-bX);					
	}
	if(aX == bX){
		l  = abs(aY-bY);					
	}
	else{
		int c1=abs(aX-bX);
		int c2=abs(aY-bY);
		l=sqrt(c1*c1+c2*c2);
	}

	return l;
}

int main(){
	ifstream f("BH_OLI_2.in");

	struct Punct{
		char nume;
		int x;
		int y;
	};

	Punct arr[100];
	int n=0;
	while (1){				
		if (f.eof()) 
			break;
		f >> arr[n].nume;
		f >> arr[n].x;
		f >> arr[n].y;
		n++;
	}

	for(int i=0;i<n;i++){
		cout << arr[i].nume << ' ' << arr[i].x << ' ' << arr[i].y << '\n';
	}
	int l1, l2, l3;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				cout << arr[i].nume << arr[j].nume << arr[k].nume << ' ';

				//verificare daca cele 3 puncte sunt coliniare
				if((arr[i].x==arr[j].x && arr[j].x==arr[k].x) || (arr[i].y==arr[j].y && arr[j].y==arr[k].y)) 
					continue;
				
				//
				l1=CalculDistanta(arr[i].x, arr[i].y, arr[j].x, arr[j].y);
				l2=CalculDistanta(arr[i].x, arr[i].y, arr[k].x, arr[k].y);
				l3=CalculDistanta(arr[j].x, arr[j].y, arr[k].x, arr[k].y);

				cout << l1 << ' ' << l2 << ' ' << l3 << ' ';

				int isoscel=0;
				if(l1==l2 || l2==l3 || l1==l3)
					isoscel=1;

				int dreptunghic=0;
				if(l1>l2 && l1>l3 && l1 == sqrt(l2*l2+l3*l3))
					dreptunghic=1;
				if(l2>l1 && l2>l3 && l2 == sqrt(l1*l1+l3*l3))
					dreptunghic=1;
				if(l3>l2 && l3>l1 && l3 * l3 ==  (l2*l2 + l1*l1) )
					dreptunghic=1;

				if(isoscel==1 && dreptunghic==1)
					cout << "este triunghi dreptunghic isoscel\n";
				else
					if(isoscel==1)
						cout << "este triunghi isoscel\n";
					else
						if(dreptunghic==1)
							cout << "este triunghi dreptunghic\n";
						else
							cout << "este triunghi oarecare\n";
			}
		}
	}

}