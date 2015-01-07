#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P2.in");

	int n;
	f >> n;
	int arr[n];
    int s=0;
	for (int i=1; i<=n; i++){
		f >> arr[i];
	}
    for (int i=0; i<=n; i++){
		if((i%5==0)&& arr[i]<0 && arr[i]%2==0)
            s+=arr[i];
	}

    cout << "Suma elementelor negative, divzibile cu 5 si pare este: " << s;

	return 0;
}
