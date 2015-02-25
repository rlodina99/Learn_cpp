#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("BH_OLI_1.in");

	struct Elev{
		string nume;
		int nr;
		int val;
	};

	Elev arr[100];
	int n = 0;
	string aux;
	while (1){
		f >> aux;				//nume elev 
		if (f.eof()) 
			break;
		arr[n].nume = aux;
		f >> aux;				// prenume
		arr[n].nume += " " + aux;

		f >> arr[n].nr;


		n++;

	}

	int identificare;
	for(int i=0; i< n; i++){
		identificare=0;
		for(int j=6; j<=arr[i].nr/2; j++){
			if( arr[i].nr %j==0 &&arr[i].nr %2==0 && arr[i].nr %3==0 )
				identificare++;
		}
		arr[i].val=identificare;
	}


	for(int i = 0; i< n; i++){
		cout << arr[i].nume << " " << arr[i].nr << " identificare " << arr[i].val << "\n";
	}

	int brr[n];
	cout << '\n';
	for (int i = 0; i < n; ++i)
	{
		brr[i]=arr[i].val;
	}

	int isOk = 0;
	do{
		isOk = 1;
		for(int i=0; i< n-1; i++){
			if (brr[i] > brr[i+1]){
				int aux = brr[i];
				brr[i] = brr[i+1];
				brr[i+1] = aux;
				isOk = 0;
			}
		}

	}while (isOk != 1);


	int grupe=1;
	for (int i = 1; i < n; ++i)
	{
		if(brr[i]!=brr[i-1])
			grupe++;
	}
	cout << grupe;
	return 0;
}