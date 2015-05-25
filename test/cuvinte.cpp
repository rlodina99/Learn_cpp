#include <iostream>
#include <fstream>

using namespace std;
int main(){

	ifstream f("cuvinte.in");

	struct Cuvant
	{
		string valoare;		//ce cuvant este
		int nr; 		//nr de apartii
	};

	Cuvant arr[100];

	string aux;

	int nr = 0;			//nr de cuvinte gasite
	while (1){
		f >> aux;
		if (f.eof())
			break;

		int gasit = 0;
		for(int i=0; i<nr; i++){
			if (arr[i].valoare == aux){
				arr[i].nr ++;
				gasit = 1;
			}
		}
		if (gasit == 0){
			arr[nr].valoare = aux;
			arr[nr].nr = 1;
			nr ++;
		}
	}

	int isOk;
	do
	{
		isOk = 1;
		for(int i=0; i< nr-1; i++){
			if (arr[i].nr < arr[i+1].nr){
				Cuvant t = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = t;
				isOk = 0;
			}
		}

	}while (isOk == 0);

	cout << "Cuvintele sortate duap nr. de aparitii:\n";
	for(int i=0; i< nr; i++){
		cout << arr[i].valoare << " " << arr[i].nr << "\n";
	}

	return 0;
}