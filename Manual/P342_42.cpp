#include <iostream>
#include <fstream>
using namespace std;


//sortare prin metoda buble sort
int main(){
	ifstream f("P342_42.in");

	int n;
	f >> n;
	int a[n];
	int m=n;
	for(int i=0;i<n;i++){
		f >> a[i];
		cout << a[i] << ' ';
	}
	cout << endl;
	int x=0;
	for(int i=0;i<n;i++){
		if(a[i]!=0)
			x++;
	}

	while(x){
	for(int i=0;i<n-1;i++){
		if(a[i]==0){
			if(a[i+1]!=0)
				a[i]=a[i+1];
				a[i+1]=0;
		    }
		   	else{
		   		int k=1;
		   		while(a[i+k]==0){
		   			k++;
		   			if(a[i+k]!=0){
		   				break;
		   				a[i]=a[i+k];
		   				a[i+k]=0;
		   			}
		   		}
			}
	}
	x--;
}


	for(int i=0;i<n;i++){
		cout << a[i] << ' ';
	}
	return 0;
}