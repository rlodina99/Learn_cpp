#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P7.in");

	int n;
	f >> n;
	int arr[n];
    int s=0;
	for (int i=1; i<=n; i++){
		f >> arr[i];
	}
    for (int i=1; i<=n; i++){
		if(i%2==0)
			s-=arr[i]*arr[i];
		else
			s+=arr[i]*arr[i];
	}
	cout << s;
    

	return 0;
}