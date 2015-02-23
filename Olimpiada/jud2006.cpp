#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
	ifstream f("jud2006.in");

	int q,x,aux,a,cifre;
	f >> q;
	int arr[100];
	int palindroame[100];

	for(int i=0;i<10;i++){
		palindroame[i]=0;
	}

	int n=0;
	while(q){
		f >> x;
		cifre=0;
		aux=x;
		while(aux){
			cifre++;
			aux=aux/10;
		}
		while(cifre){
			arr[n]=(int)(x/pow(10,cifre-1))%10;
			cout << arr[n] << ' ';
			n++;
			cifre--;
		}

	q--;
	}

	int t=0;
	cout << '\n';
	int p;
	for(int i=0;i<n;i++){
		if(arr[i]==0)
			continue;
		for(int j=n-1;j>i;j--){
			if(arr[i]==arr[j]){
				
				int cifre = (j-i)/2;
				int estePalindrom = 1;
				int p = 1;
				for(int k=i; k<i+cifre;k++){				
					if(arr[k+p]!=arr[j-p]){
						estePalindrom = 0;
						break;
					}
					p++;
				}
				if (estePalindrom){
					for(int m=i;m<=j;m++){
						palindroame[t]=palindroame[t]*10+arr[m];
					}				
					t++;
				}

			}
		}
	}

	

	aux=0;
	int isOk = 0;
	do{
		isOk = 1;
		for(int i=0; i<10-1; i++){
			if (palindroame[i] < palindroame[i+1]){
				int aux = palindroame[i];
				palindroame[i] = palindroame[i+1];
				palindroame[i+1] = aux;
				isOk = 0;
			}
		}

	}while (isOk != 1);

	cout << "Cel mai mare palindrom este " << palindroame[0];

	return 0;
}