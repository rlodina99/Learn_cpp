#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P29.in");

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



	int q=0, a=0;
	if (n <2){
		cout << "Sir cu un singur element"; 
	}
	else {
		q=arr[1]/arr[0];

		for (int i=0; i<n-1; i++){
			if(arr[i+1]/arr[i]!=q){
				a = 1;
				break;
			}
		}
		if(a!=0)
			cout << "sirul NU este progresie arit!";
		else
			cout << "sirul este progresie geometrica cu ratia: " << q <<' ' ;
 	}

	return 0;
}