#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("turneu.in");
	int n,m,x,OraseNuTrimis=0;
	char c;
	f >> n >> m;
	int arr[n];
	int brr[n];
	for(int i=0;i<n;i++){
		arr[i]=0;
	}
	for(int i=0;i<n;i++){
		brr[i]=0;
	}
	while(m){
		f >> c;
		f >> x;
		if (c=='D'){
			brr[x-1]++;
			arr[x-1]++;	
		}
		else{
			brr[x-1]++;
			arr[x-1]--;
		}
		m--;
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]!=0)
			cout << i+1 << ' ';
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(brr[i]==0)
			OraseNuTrimis++;
		if(brr[i]>max)
			max=i+1;
	}
	cout << '\n' << max << '\n' << OraseNuTrimis;
	return 0;
}