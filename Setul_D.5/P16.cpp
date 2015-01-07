#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("F16.in");

	int n;
	f >> n;
	int arr[n];

	for (int i=0; i<n; i++){
		f >> arr[i];
	}
	for(int i=0; i<n; i++){
		cout << arr[i] << ' ' ;
	}
	cout << endl;

	int s=0,aux=0;
	for (int i=0; i<n-1; i++){
		aux=arr[i];
		while(aux!=0){
			s+=aux%10;
			aux=aux/10;
		}
		if(s==arr[i+1])
			cout << arr[i] << ' ' << arr[i+1];
		s=0;
	}


return 0;
}