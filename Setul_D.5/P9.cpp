#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P9.in");

	int n,min;
	f >> n;
	int arr[n];
    int s=0;
	for (int i=0; i<n; i++){
		f >> arr[i];
	}

	for (int i=0; i<n; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
	

	for (int i=0; i<n; i++){
		
		if((arr[i+i])<(arr[n-1-i]))
			min=arr[i];
		else
			min=arr[n-1-i];
		cout << min << ' ';
		min=0;
		
	}
	 

   

   

	return 0;
}
