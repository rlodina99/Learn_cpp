#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("subSibiu_p1.in");

	int n = 0;			//nr. de numere
	int nr;
	struct Numar{
		int l;
		int cifre[9];
	};
	Numar arr[100];
	while(1){
		f >> nr;
		if(f.eof())
			break;
		int k=0;
		while(nr){
			arr[n].cifre[k]=nr%10;
			k++;
			nr=nr/10;
		}
		arr[n].l = k;
		n++;
	}

	for (int i = 0; i < n; i++)
	{
		for(int j=arr[i].l-1;j>=0;j--){
			cout << arr[i].cifre[j];
		}
		cout << ' ';
	}
	cout << '\n';
	int okFinal=0;
	for(int i=0;i<n-1;i++){
		arr[i]; //primul 
		arr[i+1];		//al doilea
		int ok=0;
		for(int j=0; j<arr[i+1].l;j++){
			for(int k=0; k<arr[i].l;k++){
				if(arr[i].cifre[k]==arr[i+1].cifre[j]){
					ok=1;
					break;
				}
			}
			if(ok==1)
				break;
		}
		if(ok==1)
			okFinal++;
		else
			{
				break;
				okFinal=0;
			}	
	}
	if(okFinal==n-1)
		cout << "DA";
	else
		cout << "NU";



	return 0;
}