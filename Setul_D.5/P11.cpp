#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P11.in");

	int n;
	f >> n;
	int arr[n];
    int min=0;
	for (int i=1; i<=n; i++){
		f >> arr[i];
	}
    for (int i=0; i<=n; i++){
		if(i%2==0)
			if(min>arr[i])
				min=arr[i];          
	}

    cout << min;

	return 0;
}