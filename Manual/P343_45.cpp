#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P343_45.in");
	
	int n;
	f >> n;
	int a[n];
	int b[n];
	int s[n+1];
	int d[n];

	for(int i=0;i<n;i++){
		f >> a[i];
		cout << a[i] << ' ';
	}
	cout << endl;
	
	for(int i=0;i<n;i++){
		f >> b[i];
		cout << b[i] << ' ';
	}

	int p=1;
	for(int i=0;i<n;i++){
		if(a[n-p]+b[n-p]>10){
			a[n-p-1]+=1;
			s[i]=(a[n-p]+b[n-p])%10;
		}
		if(a[n-p]+b[n-p]==10){
			a[n-p-1]+=1;
			s[i]=0;
		}
		if(a[n-p]+b[n-p]<10){
			s[i]=a[n-p]+b[n-p];
		}
		p++;
		}
	cout << endl << "Suma vectorilor este:" << endl;
	for(int i=n-1;i>=0;i--){
		cout << s[i] << ' ';
	}


	int k=1;
	for(int i=0;i<n;i++){
		if(a[n-k]-b[n-k]>0){
			d[i]=a[n-k]-b[n-k];
		}
		if(a[n-k]-b[n-k]==0){
			d[i]=0;
		}
		if(a[n-k]-b[n-k]<0){
			d[i]=10-b[n-k]+a[n-k];
			a[n-k-1]=a[n-k-1]-1;
			}
		k++;
		}
	cout << endl << "Diferenta vectorilor este:" << endl;
	for(int i=n-1;i>=0;i--){
		cout << d[i] << ' ';
	}

	cout << endl << "Produsul :" << endl;


	return 0;
	
}