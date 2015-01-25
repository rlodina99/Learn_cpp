#include <iostream>
#include <fstream>

using namespace std;

int main(){
	


	int a=1,b=1,c=2,aux,n=20,k=0;
	for(int i=0;i<n;i++){
		aux=c;
		if(c%2!=0){
			cout << c << ' ';
			k++;
		}
		if(k%5==0)
			cout << endl;
		c=c+b;
		a=b;
		b=aux;
	}
	return 0;
	
}