#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P1.in");

	int n;
	f >> n;
	int arr[n];

	for (int i=1; i<=n; i++){
		f >> arr[i];
	}
	for(int i=1; i<=n; i++){
		cout << arr[i] << ' ' ;
	}
	cout << endl;

	int s=0,p=1;
    for (int i=1; i<=n; i++){
    	if(i%3==0){

    		//determinare daca arr[i] este numat prim
    		int estePrim = 1;
    		for(int j = arr[i] -1 ; j>1; j--){
    			if (arr[i] % j == 0){
    				estePrim = 0;
    				break;
    			}
    		}
    		if (estePrim){
	    		cout << arr[i] << ' ';
	    		s+=arr[i];
	    		p=p*arr[i];
	    	}
    	}

	}
	cout << endl;
	cout << "Sm: " << s << " prod: " << p;
	return 0;
}
