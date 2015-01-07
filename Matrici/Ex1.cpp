#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("Ex1.in");
	int m, n;
	f >> m >> n;
	
	int d[m][n];

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			f>> d[i][j];
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout <<  d[i][j] << ' ';;
		}
		cout << endl;
	}

	int s=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			s+=d[i][j];
		}
	}
	cout << "Suma elm este: " << s << " iar media elm este: " << s/(m*n) << endl;

	int sm=0;
	for(int i=0; i<m; i++){
		sm+=d[i][0];
		sm+=d[i][n-1];
	}

	for(int i=1; i<n-1; i++){
		sm+=d[0][i];
		sm+=d[m-1][i];
	}
	cout << sm << endl;;

     
    int sd1=0;
    for(int i=0; i<n; i++){
		sd1+=d[i][i];
	}
	int sd2=0;
	int p=3;
	int k=0;
	while(p>=0){
		sd2+=d[p][k];
		p--;
		k++;
	}

	cout << sd1 << ' ' << sd2;
	return 0;
}