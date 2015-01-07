#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("data.in");

	int n;
	f >> n;
	int arr[n];

	for (int i=0; i<n; i++){
		f >> arr[i];
	}
	for (int i=0; i<n; i++){
		cout << arr[i] << ' ' ;
	}
	cout << endl;

   //sortare
	 int ok=0,aux;
	 while(ok==0){
	 	ok=1;
	 	for(int i=0; i<n-1; i++){
	 		if(arr[i]>arr[i+1]){
		 		aux=arr[i+1];
		 		arr[i+1]=arr[i];
		 		arr[i]=aux;
		 		ok=0;
	 		}
	 	}	
	 	
	 }

	for (int i=0; i<n; i++){
		cout << arr[i] << ' ' ;
	}

	// for (int i=0; i<n/2; i++){
		
	// 	cout << arr[i] << ' ' << arr[n-i-1];
	// 	cout << endl;
	// }

	// if (n%2 != 0 ) cout << arr[n/2];

	cout << endl;

	return 0;
}