#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream f("P106_38.in");
	int n,p;
	f >> n >> p;

	//verificare p=prim
	int prim=1;
	for(int i=2;i<p-1;i++){
		if(p%i==0){
			prim=0;
			break;
		}
	}
	int k=0; //puterea obtinuta
	if(prim==1){
		int aux;
		for(int i=1; i<n ; i++){
			aux=i;
			while(aux%p==0){
				k++;
				aux=aux/p;
			}
		}
	}
	cout << k;





	return 0;
	
}