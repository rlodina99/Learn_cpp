#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream f("5p1.in");
	int a,a1,b,b1,cifa=0,cifb=0;
	f >> a >> b;
	int arr[100];
	cout << a << ' ' << b <<'\n';
	a1=a;
	b1=b;

	while(a1){
		arr[cifa]=a1%10;
		cifa++;
		a1=a1/10;
	}

	while(b1){
		arr[cifa+cifb]=b1%10;
		cifb++;
		b1=b1/10;
	}

	int arrLen = cifa+cifb;
	cout << endl;

	for(int i=0;i<cifa;i++){
		for(int j=cifa;j<arrLen;j++){
			if(arr[i]==arr[j]){
				cout << arr[i] << ' ';
				break;
			}
		}
	}
	cout << endl;

	int isOk = 0;

	do{
		isOk = 1;
		for(int i=0; i<arrLen-1; i++){
			if (arr[i]<arr[i+1]){
				int aux=arr[i];
				arr[i]=arr[i+1];
				arr[i+1] = aux;
				isOk = 0;
			}
		}

	}while (isOk != 1);

	long nr=0;
	for(int i=0;i<arrLen;i++){
		nr=nr*10+arr[i];
		cout << arr[i];
	}

	cout << '\n' << nr;
	return 0;
}