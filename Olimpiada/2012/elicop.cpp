#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("elicop.in");
	int m; 					//nr de linii
	int n;					//nr de coloane
	f >> m >> n;
	int mat[m+1][n+1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			f >> mat[i][j];
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}
	int k;
	f >> k;
	int l1, c1, l2, c2, p;
	int rezcorect = 0;		//nr de elicoptere asezate corect

	while(k){
		//procesare elicopter
		f >> l1 >> c1 >> l2 >> c2 >> p;
		if(c2>c1){
			if(p==1){
				for(int i=l1;i<=l2;i++){
					for(int j=i;j>0;j--){

					}
				}
			}
		}

		k--;
	}
}