#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("sortNote.in");

	struct copil{
		string nume;
		double nota;
	};

	int n;
	f >> n;			//Nr de copii
	copil arr[n];

	for(int i=0;i<n;i++){
		f >> arr[i].nume;
		f >> arr[i].nota;
	}

	copil aux;
	int ok=0;
	while(ok==0){
		ok=1;
		for(int i=0;i<n-1;i++){
			if(arr[i].nota<arr[i+1].nota){
				aux=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=aux;
				ok=0;
			}
		}
	}
	int a=0;
	for(int i=0;i<n;i++){
		if(arr[i].nota<5 && a!=1){
			cout << "_______________" << '\n';
			a++;
		}
		cout << arr[i].nume << '\t' << arr[i].nota << '\n';
	}

	return 0;
}