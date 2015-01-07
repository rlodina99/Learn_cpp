#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P4.in");

	int n;
	f >> n;
	int arr[n];
    int s=0;
	for (int i=0; i<=n; i++){
		f >> arr[i];
	}
    for (int i=0; i<=n; i++){
		if(arr[i]>0){
            cout << "Pozitia nr este: " << i+1;
            break;
		}
	}
	return 0;
}
