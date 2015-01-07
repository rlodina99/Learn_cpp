#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
	ifstream f("P3.in");

	int n;
	f >> n;
	int arr[n];
    int s=0;
	for (int i=1; i<=n; i++){
		f >> arr[i];
	}

	for (int i=0; i<=n; i++){
		if(i%2!=0 && (sqrt(arr[i])==(int)(sqrt(arr[i]))))
            cout << arr[i] << ' ';
	}
	return 0;
}