#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P26.in");

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



	int alternativ=1;
	for (int i=0; i<n-1; i++){
		if(arr[i]*arr[i+1]==1){
			alternativ=0;
			break;
		}

	}
	if(alternativ==1)
		cout << "Nr este alternativ";
	else
		cout << "Nr NU este alternativ";



return 0;
}