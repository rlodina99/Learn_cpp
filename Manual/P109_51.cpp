#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P109_51.in");
	
	int x,y,max=0,n=0,nr=0,poz=0;
	f >> x;

	while(x){
		y=y/10;
		nr=nr*10+x%10;
		x=x/10;

	}

	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=nr%10;
		nr=nr/10;
	}
	y=nr;
	while(y){
		if(max<y%10){
			poz++;
			max=y%10;
		}
		n++;
		y=y/10;
	}
	cout << x << ' '<<n << ' ' << max << ' ' << poz << endl;
    poz -=1;


	int ok1=1,ok2=1;
	for(int i=0;i<poz;i++){
		if(arr[i]>arr[i+1]){
			ok1=0;
			break;
		}
	}
	
	for(int i=poz;i<n-1;i++){
		if(arr[i]<arr[i+1]){
			ok2=0;
			break;
		}
	}
	 if(ok1==ok2)
	 	cout << "Aspect de munte!";
	 else
	 	cout << "NU are aspect de munte!";


	 cout << "\nVarianta B\n";
	 //--------------------------------

	 f.close();
	 f.open("P109_51.in");

	 f >> x;
	 int sens = 1;				//1 - urcare, -1 = coborare
	 int cifraVeche = x % 10;
	 x = x/10;

	 int cifra;
	 int rez = 1; 					// munte
	 while(x){
	 	cifra = x %10;
	 	if (cifraVeche < cifra) {	//aici incepe o urcare
			if (sens == -1)  {
				rez = 0; 			//o urcare pe panta de coborare
				break;
			}
	 	}
	 	else {						//aici este o coborare  cifraVeche > cifra
	 		if (sens == 1) sens = -1;
	 	}
	 	cifraVeche = cifra;
	 	x = x/10;
	 }

	 if (rez == 0) cout << "Nu are";
	 
	 cout << " aspect de munte";

	return 0;
	
}