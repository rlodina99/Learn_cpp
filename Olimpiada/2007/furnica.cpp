#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream f("furnica.in");
	int n;
	f >> n;
	int mat[n+1][n+1];

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			mat[i][j]=(i+j)%6;
		}
	}

	int a;
	f >> a;
	int arr[a];
	for(int i=0;i<a;i++){
		f >> arr[i];
		cout << arr[i] << ' ';
	}
	cout << '\n';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}
	int matrice[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			matrice[i][j]=0;
		}
	}

	int l=1, c=1,sumaFirm=0;
	sumaFirm+=mat[l][c];
	cout << "(" << l << ',' << c << ')' << ' ';
	for(int i=0;i<a;i++){
		if(arr[i]==8){
			c=c-1;
			l=l-1;
		}
		if(arr[i]==1){
			l=l-1;
		}
		if(arr[i]==2){
			c=c+1;
			l=l-1;
		}
		if(arr[i]==7){
			c=c-1;
		}
		if(arr[i]==3){
			c=c+1;
		}
		if(arr[i]==6){
			c=c-1;
			l=l+1;
		}
		if(arr[i]==5){
			l=l+1;
		}
		if(arr[i]==4){
			c=c+1;
			l=l+1;
		}
		sumaFirm+=mat[l][c];
		matrice[l][c]++;
		cout << "(" << l << ',' << c << ')' << ' ';
	}
	
	cout <<'\n' <<  sumaFirm;
	int casutaMax=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(matrice[i][j]>casutaMax)
				casutaMax=matrice[i][j];
		}
	}
	cout << ' ' << casutaMax;
	return 0;
}