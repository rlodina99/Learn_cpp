#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("evel.in");


	struct Elev{
		string nume;
		int nota;
	};

	Elev arr[28];

	string aux;
	int n=0;
	while(1){
		f >> aux;
		if(f.eof())
			break;
		arr[n].nume=aux;
		f >> arr[n].nota;
		n++;
	}
	int isOk=1;
	while(isOk){
		isOk=0;
		for(int i=0;i<n-1;i++){
			if(arr[i].nota<arr[i+1].nota){
				Elev aux2=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=aux2;
				isOk=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << arr[i].nume << ' ' << arr[i].nota << '\n';
	}
}