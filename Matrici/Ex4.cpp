#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream f("Ex4.in");
	int n,m;
	f >> n >> m;
	int mat[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			f >> mat[i][j];
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	

	struct Numere
	{
		int valoare;		//ce numar este
		int nr; 		//nr de apartii
	};

	Numere arr[n*m];
	for(int i=0;i<100;i++){
		arr[i].valoare=0;
		arr[i].nr=0;
	}

	int aux;

	cout << '\n';
	for(int i=0;i<n;i++){	//AFISARE DIAGONALA stanga jos
		for(int j=0;j<i+1;j++){
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	int nr = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){			//DIAGONALA  stanga jos determinare nr
			aux=mat[i][j];
			int gasit = 0;
			for(int k=0; k<nr; k++){
				if (arr[k].valoare == aux){
					arr[k].nr ++;
					gasit = 1;
				}
			}
			if (gasit == 0){
				arr[nr].valoare = aux;
				arr[nr].nr = 1;
				nr ++;
			}	
		}
	}

	for(int i=0; i< nr; i++){
		if(arr[i].nr>=3)
			cout << arr[i].valoare << " apare de " << arr[i].nr << "\n";
	}

	//DIAGONLA dreapta sus

	for(int i=0;i<100;i++){
		arr[i].valoare=0;
		arr[i].nr=0;
	}
	
	cout << '\n';
	for(int i=0;i<n;i++){	//AFISARE DIAGONALA dreapta sus
		for(int j=n-1;j>=i;j--){
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	nr = 0;
	for(int i=0;i<n;i++){		
		for(int j=n-1;j>=i;j--){		//DIAGONALA dreapta sus determinare nr
			aux=mat[i][j];
			int gasit = 0;
			for(int k=0; k<nr; k++){
				if (arr[k].valoare == aux){
					arr[k].nr ++;
					gasit = 1;
				}
			}
			if (gasit == 0){
				arr[nr].valoare = aux;
				arr[nr].nr = 1;
				nr ++;
			}	
		}
	}
	for(int i=0; i< nr; i++){
		if(arr[i].nr>=3)
			cout << arr[i].valoare << " apare de " << arr[i].nr << "\n";
	}

	//DIAGONLA stanga sus

	for(int i=0;i<100;i++){
		arr[i].valoare=0;
		arr[i].nr=0;
	}
	
	cout << '\n';
	for(int i=0;i<n;i++){	//AFISARE DIAGONALA stanga sus
		for(int j=n-1-i;j>=0;j--){
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	nr = 0;

	for(int i=0;i<n;i++){			//DIAGONALA stanga sus determinare numar
		for(int j=n-1-i;j>=0;j--){
			aux=mat[i][j];
			int gasit = 0;
			for(int k=0; k<nr; k++){
				if (arr[k].valoare == aux){
					arr[k].nr ++;
					gasit = 1;
				}
			}
			if (gasit == 0){
				arr[nr].valoare = aux;
				arr[nr].nr = 1;
				nr ++;
			}
		}
	}
	for(int i=0; i< nr; i++){
		if(arr[i].nr>=3)
			cout << arr[i].valoare << " apare de " << arr[i].nr << "\n";
	}

	//DIAGONLA dreapta jos

	for(int i=0;i<100;i++){
		arr[i].valoare=0;
		arr[i].nr=0;
	}

	cout << '\n';
	for(int i=0;i<n;i++){	//AFISARE DIAGONALA dreapta jos
		for(int j=n-1;j>=n-i-1;j--){
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	nr = 0;

	for(int i=0;i<n;i++){				//DIAGONALA dreapta jos  determinare numar
		for(int j=n-1;j>=n-i-1;j--){
			aux=mat[i][j];
			int gasit = 0;
			for(int k=0; k<nr; k++){
				if (arr[k].valoare == aux){
					arr[k].nr ++;
					gasit = 1;
				}
			}
			if (gasit == 0){
				arr[nr].valoare = aux;
				arr[nr].nr = 1;
				nr ++;
			}
		}
	}

	for(int i=0; i< nr; i++){
		if(arr[i].nr>=3)
			cout << arr[i].valoare << " apare de " << arr[i].nr << "\n";
	}

	return 0;
}