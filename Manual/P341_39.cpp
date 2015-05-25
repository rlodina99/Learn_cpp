#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P341_39.in");

	int n,aux;
	f >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		f >> arr[i];
	}

	for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if (arr[j]>arr[i])
            {
                aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }

    for(int i=0;i<n/2;i++){
    	cout << arr[i] << ' ';
    }

	return 0;
	
}