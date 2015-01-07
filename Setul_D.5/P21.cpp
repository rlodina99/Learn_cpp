#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P21.in");

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

	double ma=0;
	for (int i=0; i<n-1; i++){
		ma=(arr[i]+arr[i+2])/2.0;
		if(ma==arr[i+1])
			cout << " ( " << arr[i] << "," << arr[i+1] << ","<< arr[i+2] << " )";
		ma=0;
	}

return 0;
}