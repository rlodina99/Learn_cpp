#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("binarySearch.in");

	int n;
	f >> n;
	

	int arr[n];
	for(int i=0;i<n;i++){
		f >> arr[i];
		cout << arr[i] << ' ';
	} 
	cout << endl;
	int ok=0,aux=0;
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
		if(ok==1)
			break;
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << ' ';
	} 

	int k=234;
	// int idx=-1;
	// int i=n/2;
	// while(i!=0){
	// 	if(k==arr[i]){
	// 		cout << endl << k << " found idx= " << i +1<<' ';
	// 		break;
	// 	}
	// 	else
	// 		if(k>arr[i]){
	// 			i=i+(n-i)/2;
	// 		}
	// 		else{
	// 			i=i/2;
	// 		}


	// 
	int st=0, dr=n-1, gasit=-1,mijl;
	while (st<=dr && gasit==-1) 
	{
		mijl=(st+dr)/2;
		if (arr[mijl]==k)
			gasit=mijl;
		else
			if (k<arr[mijl])
				dr=mijl-1;
			else
				st=mijl+1;
	}
	if (st>dr)
		cout<<endl << "Nu s-a gasit elementul cautat !"<<endl;
	else
		cout<<endl<<"Elementul cautat apartine sirului !" << mijl+1 <<endl;

	return 0;
}