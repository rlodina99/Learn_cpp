#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P5.in");

	int n;
	f >> n;
	int arr[n];
    int nr=0, p ,u;
	for (int i=0; i<n; i++){
		f >> arr[i];
	// }
 //    for (int i=0; i<=n; i++){
    	u=arr[i]%10;
    	while(arr[i]!=0){
    		p=arr[i]%10;
    		arr[i]=arr[i]/10;
    	}
		if(p==u)
			nr++;
        u=0;
        p=0;
	}

    cout << nr;
	return 0;
}
