#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P20.in");

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




	for (int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int s=0,s1=0,aux=0,aux1=0;
			aux=arr[i];
			aux1=arr[j];
			while(aux!=0){
				s+=aux%10;
				aux=aux/10;
			}
			while(aux1!=0){
				s1+=aux1%10;
				aux1=aux1/10;
			}
			if(s==s1)
				cout << " ( " << arr[i] << "," << arr[j] << " )";
		}
	}




return 0;
}