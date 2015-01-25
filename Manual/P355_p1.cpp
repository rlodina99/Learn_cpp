#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream f("P355_1.in");
	int m,n;
	f >> m >> n;
	int mat[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			f >> mat[i][j];
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	
	for(int i=0;i<m;i++){
		int aux=mat[i][1];
		mat[i][1]=mat[i][2];
		mat[i][2]=aux;
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

		return 0;
	}


	
	
	


