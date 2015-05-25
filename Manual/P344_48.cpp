#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P344_48.in");

	int n;
	f >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		f >> arr[i];
	}

	int k=0;

	for(int i=0;i<n-2;i++){
		if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2])
			k=i+1;
	}
	
	int crescOK=1,descrescOK=1;
	for (int i = 0; i < k-1; i++)
	{
		if(arr[i]>arr[i+1])
			crescOK=0;
	}

	for (int i = k+1; i < n-1; i++)
	{
		if(arr[i]<arr[i+1])
			descrescOK=0;
	}

	if(crescOK==1 && descrescOK==1)
		cout << "Aspect de munte!";
	else
		cout << "NU!";
	return 0;
	
}