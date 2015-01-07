#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
	ifstream f("P17.in");

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

	
	for (int i=0; i<n-1; i++){
		//cout << endl << i << " -> arr[" << i << "]=" << pow(arr[i],2) <<", arr[" << i+1 <<"]=" << arr[i+1] << endl;
		if(arr[i] * arr[i] == arr[i+1]){
			cout << " ( " << arr[i] << "," << arr[i+1] << " )";
			if(i<n-2)
				cout << " ,";
		}
	}		


	return 0;
}