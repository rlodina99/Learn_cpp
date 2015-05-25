#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P344_47.in");
	
	int n;
	f >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		f >> arr[i];
	}


	int inceput=0,inceputOK=0,lungime=0,lungimefinal=0;
	for (int i = 0; i < n-1; i++)
	{
		lungime=0;
		if(arr[i]<arr[i+1]){
			inceput=i;

		}
		for(int j=i;j<n-1;j++){
			if(arr[j]<arr[j+1])
				lungime++;
			else
				break;
		}

		if(lungime>lungimefinal){
			lungimefinal=lungime;
			inceputOK=inceput;
		}
	}



	
	for (int i=inceputOK;  i<=inceputOK+lungimefinal; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
	
}