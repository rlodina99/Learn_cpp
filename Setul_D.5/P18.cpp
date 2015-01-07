#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
	ifstream f("P18.in");

	int n;
	f >> n;
	int arr[n];

	for (int i=0; i<n; i++){
		f >> arr[i];
	}
	for(int i=0; i<n; i++){
		cout << arr[i] << " , " ;
	}
	cout << endl;

	int s=0,aux=0;
	for (int i=0; i<n-1; i++){
		aux=arr[i];
		while(aux!=0){
			if(aux%10==1)
				s++;
			aux=aux/10;
		}
		if(s*s==arr[i+1])
			cout << " ( " << arr[i] << "," << arr[i+1] << " )";
		s=0;
	}		


	return 0;
}