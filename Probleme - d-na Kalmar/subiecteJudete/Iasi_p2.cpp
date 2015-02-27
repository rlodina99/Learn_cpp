//problema a 2-a de la Iasi.pdf
//Problema 2 – Numere superprime

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){

	ifstream f("iasi_p2.in");

	int n;
	f >> n;
		for(int i=pow(10,n-1);i<pow(10,n);i++){
			int prim=0;
			int aux=i;
			while(aux){
				int ok=0;
				if(aux==1){
					ok=1;
					break;
				}
				for(int d=2;d<=aux/2;d++){
					if(aux%d==0){
					   	ok=1;
					}
				}
				if(ok==0)
					prim++;	
				aux=aux/10;
			}
			if(prim==n)
				cout << i << ' ';			
	}

}