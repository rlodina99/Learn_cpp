#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("Ex3.in");
    int n;
    f >> n ;
    int d[n][n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			f>> d[i][j];
		}
	}

	int s=0,k=0,m1=0;

	while(m1<n){
		for(int i=0;i<=m1; i++){
			s+=d[k][i];
		}
		k++;
		m1++;
	}

	cout << s;

	return 0;
}