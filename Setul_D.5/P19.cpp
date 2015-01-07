#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P19.in");

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
		for (int j=i+1; j<n; j++)
			if(arr[i]%s==arr[j])
				cout << " ( " << arr[i] << "," << arr[j] << " )";
		s=0;
	}


return 0;
}