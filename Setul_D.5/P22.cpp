#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P22.in");

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

	
	for (int i=0; i<n-1; i++){
		if(arr[i] < arr[i+1] && arr[i+1] < arr[i+2])
			cout << " ( " << arr[i] << "," << arr[i+1] << ","<< arr[i+2] << " )";
	}

return 0;
}