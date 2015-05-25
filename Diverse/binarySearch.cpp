#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("binarySearch.in");

    int n,x,aux;
    f >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
    	f >> arr[i];
    }
    int ok=0;
    while(ok==0){
    	ok=1;
    	for(int i=0;i<n-1;i++){
    		if(arr[i]>arr[i+1]){
    			aux=arr[i];
    			arr[i]=arr[i+1];
    			arr[i+1]=aux;
    			ok=0;
    		}
    	}
    }

   

    int cautari=0,nr,jum,a=0,b=n-1;

    while(1){
    	jum=(a+b)/2;
    	cautari++;
    	if(arr[jum]==x){
    		cout << "OK pozitia " << jum << "\n cautari: " << cautari;
    		break;
    	}
    	else{
    		if(x>arr[jum])
    			a=jum+1;
    		else
    			b=jum-1;
    	}
    	if(a>b){
    		cout << "NU exista!";
    		break;
    	}
    }

    
}