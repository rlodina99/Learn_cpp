#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P30.in");

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




	int multime=1;
		for (int i=0; i<n-1; i++){
			for(int j=i+1; j<n-1; j++)
 				if(arr[i]==arr[j]){
 					multime=0;
 					break;
 				}

 		}

 	if(multime!=0)
 		cout << "Sirul dat este  multime!";
 	else
 		cout << "Sirul dat NU este  multime!";
	return 0;
}