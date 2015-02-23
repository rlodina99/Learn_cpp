#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("vecini.in");

	int m,n,k;

	f >> m >> n;
	f >> k;
	int mat[m][n];

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			mat[i][j]=0;
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}
	int a,b;
	while(k){
		f >> a >> b;
		mat[a][b]=1;
		k--;
	}

	int nrMax=0;

	cout << '\n';
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int max=0;
			if(j>1){//stanga
				if(mat[i][j-1]==mat[i][j])
					max++;
			}
			if(j<n){//dreapta
				if(mat[i][j+1]==mat[i][j])
					max++;
			}
			if(i>1){//sus
				if(mat[i-1][j]==mat[i][j])
					max++;
			}
			if(i<m){//jos
				if(mat[i+1][j]==mat[i][j])
					max++;
			}
			if(i>1 && j>1){//stanga sus
				if(mat[i-1][j-1]==mat[i][j])
					max++;
			}
			if(i>1 && j<n){//dreapta sus
				if(mat[i-1][j+1]==mat[i][j])
					max++;
			}
			if(i<m && j>1){//stanga jos
				if(mat[i+1][j-1]==mat[i][j])
					max++;
			}
			if(i<m && j<n){//dreapta jos
				if(mat[i+1][j+1]==mat[i][j])
					max++;
			}
			if(nrMax<max)
				nrMax=max;
		}
	}

	cout << "Numarul maxim de vecini buni este " << nrMax;

	cout << '\n';
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int max=0;
			if(j>1){//stanga
				if(mat[i][j-1]==mat[i][j])
					max++;
			}
			if(j<n){//dreapta
				if(mat[i][j+1]==mat[i][j])
					max++;
			}
			if(i>1){//sus
				if(mat[i-1][j]==mat[i][j])
					max++;
			}
			if(i<m){//jos
				if(mat[i+1][j]==mat[i][j])
					max++;
			}
			if(i>1 && j>1){//stanga sus
				if(mat[i-1][j-1]==mat[i][j])
					max++;
			}
			if(i>1 && j<n){//dreapta sus
				if(mat[i-1][j+1]==mat[i][j])
					max++;
			}
			if(i<m && j>1){//stanga jos
				if(mat[i+1][j-1]==mat[i][j])
					max++;
			}
			if(i<m && j<n){//dreapta jos
				if(mat[i+1][j+1]==mat[i][j])
					max++;
			}
			if(nrMax==max)
				cout << "(" << i << ',' << j << ") ";
		}
	}

	return 0;
}