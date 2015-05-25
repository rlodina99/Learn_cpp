#include <iostream>
#include <fstream>

using namespace std;
int main(){

	ifstream f("IX_livada_e.in");
	int m,n,p;
	f >> m >> n >> p;
	int mat[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			f >> mat[i][j];
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}



	int max, pozitiiConsecutive=0;
	for(int i=0;i<m;i++){
		max=0;
		for(int j=0;j<n-1;j++){
			if(mat[i][j]==mat[i][j+1])
				max++;
		}
		if(pozitiiConsecutive<max)
			pozitiiConsecutive=max;
	}
	cout << '\n' << pozitiiConsecutive;


	return 0;
}