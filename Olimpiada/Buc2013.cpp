#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
	ifstream f("Buc2013.in");

	int n,x;
	f >> n;
	int arr[n];

	for(int i=0;i<n;i++){
		f >> arr[i];
	}

	int creioane=0,nrMaxCreioane=0,nrMaxCreioaneGalb=0,crGalb=0,cutie=1,cutiePtTarg=0;;
	for(int i=0;i<n;i++){
		if(arr[i]==3)
			crGalb++;
		if(nrMaxCreioaneGalb<crGalb)
			nrMaxCreioaneGalb=crGalb;
		creioane++;
		if(nrMaxCreioane<creioane && crGalb>=1)
			nrMaxCreioane=creioane;
		if(arr[i]==arr[i+1]){
			creioane=0;
			crGalb=0;
			cutie ++;
		}
	}

	cout << nrMaxCreioane;

	int nrCutie=0;
	cutie=1;
	crGalb=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]==3)
				crGalb++;
		if(nrMaxCreioaneGalb==crGalb)
			nrCutie=cutie;
		if(arr[i]==arr[i+1]){
			crGalb=0;
			cutie ++;
		}	
	}

	cutie=1;
	int nrCreioanePtTarg=0;

	for(int i=0;i<n-1;i++){
		if(nrCutie==cutie)
			nrCreioanePtTarg++;
		if(arr[i]==arr[i+1]){
			cutie ++;
		}	
	}

	cout << "\n" << nrCreioanePtTarg;

	return 0;
}