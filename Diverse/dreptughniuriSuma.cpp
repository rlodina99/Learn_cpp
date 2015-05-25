#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("sumdreptunghi.in");
	int n,m;
	f >> n >> m;
	int mat[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			f >> mat[i][j];
		}
	}

	int arr[m];
	for(int i=0;i<m;i++){
		arr[i]=0;
	}


	int i=0;
	while(i<n-i){

		//stanga->dreapta
		for(int k=i;k<m-i;k++){
			arr[i+1]+=mat[i][k];
		}

		for(int k=i;k<m-i;k++){
			arr[i+1]+=mat[i][k];
		}


		//SUS->JOS
		for(int k=i+1;k<n-i-1;k++){
			arr[i+1]+=mat[k][i];
		}

		for(int k=i+1;k<n-i-1;k++){
			arr[i+1]+=mat[k][i];
		}

		i++;

	}

	for(int i=0;i<m;i++){
		if(arr[i]!=0)
			cout << arr[i] << ' ';
	}

return 0;
}