#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P35.in");

	int n;
	f >> n;

	int arr[n];
	int i=1,j=0;
	while(1){
		
		if(i%2!=0){
			arr[j]=i;
			j++;
		}
		if(j==n)
			break;
		i++;
	}
	
	for(int i=0;i<n;i++)
		cout << arr[i] << ' ';

	return 0;
}