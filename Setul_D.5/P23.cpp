#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P23.in");

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
			for(int k=j+1; k<n; k++){
				if(((arr[i] < arr[j] + arr[k]) || (arr[j] < arr[i] + arr[k]) || (arr[k] < arr[i] + arr[j])) && ((arr[i]>0) && (arr[j]>0) && (arr[k]>0)))
					cout << "(" << arr[i] << ',' <<  arr[j] << ',' << arr[k] << ')' << endl;



			}
		}
	}

return 0;
}