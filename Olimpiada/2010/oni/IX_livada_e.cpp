#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("IX_livada_e.in");
    
    int m,n,p;
    f >> m >> n >> p;
    
    int nrPoziti=0;
    int soiMajoritar=0;
    int max=0,k=0,maxPoz=0;

    while(m){
 		int arr[n];
 		int n1=n;
 		k=0;
 		soiMajoritar=0;
 		nrPoziti=0;
 		for(int i=0;i<n;i++){
 			f >> arr[i];
 			cout << arr[i] << ' ';
 		}
 		cout << endl;

 		for(int i=0;i<n-1;i++){
 			if(arr[i]==arr[i+1])
 				nrPoziti++;
 		}
 		if(nrPoziti>maxPoz)
 			maxPoz=nrPoziti;

 		int x=0,j=0;;
 		while(n1){
 			x=arr[j];
 			soiMajoritar=0;
	 		for(int i=0;i<n;i++){
	 			if(x==arr[i] && j!=i)
	 				soiMajoritar++;
	 		}
	 		if(soiMajoritar+1>k && soiMajoritar+1>=(n/2)+1)
	 			k=1;
	 		n1--;
	 		j++;
	 	}
	 	if(k==1)
	 		max++;

 		m--;
 	}

 	cout << max << endl << maxPoz;
    return 0;
}

