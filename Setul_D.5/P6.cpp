#include <iostream>
#include <fstream>
using namespace std;

int main(){
	

	ifstream f("P6.in");

	int n,p,x,scif=0;
	f >> n;
	f >> p;
	int arr[n];

	for (int i=0; i<n; i++){
		f >> arr[i];
	}
    for (int i=0; i<n; i++){
    	
    	x=arr[i];
		while(x!=0){
			scif+=x%10;
			x=x/10;
		}
		if(scif%p==0)
			cout << arr[i] << ' ';
		scif=0;
	}
	return 0;
}
