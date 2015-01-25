#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("spirala.in");
	int m;

	f >> m;

	int mat[m][m];

	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			f >> mat[i][j];
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout << mat[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl << endl;
	for(int i=0;i<m;i++){
		cout << mat[0][i] << ' ';
	}
	for(int i=1;i<m;i++){
		cout << mat[i][m-1] << ' ';
	}
	for(int i=m-1;i>0;i--){
		cout << mat[m-1][i] << ' ';
	}
	for(int i=m-1;i>0;i--){
		cout << mat[i][0] << ' ';
	}
	
	for(int i=1;i<m-1;i++){
		cout << mat[1][i   << ' ';
	}
	for(int i=2;i<m-1;i++){
		cout << mat[i][m-2] << ' ';
	}
	for(int i=m-3;i>0;i--){
		cout << mat[m-2][i] << ' ';
	}
	for(int i=m-3;i>1;i--){
		cout << mat[i][1] << ' ';
	}
	cout << mat[2 ][2];
	return 0;
	
}