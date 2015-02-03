#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("tablasah.in");
    int m,n;
    f >> m >> n;
    int d[8][8];

    for(int i=0;i<8;i++){
    	for(int j=0;j<8;j++){
    		f >> d[i][j];
    		cout << d[i][j] << " ";
    	}
    	cout << endl;
    }
    cout << endl << d[m][n] << endl;

    //deplasari in cruce
    int k=0;
    for(int i=m-1;i>0;i--){
    	if(d[i][n]<0){
    		cout << d[i][n] << ' ';
    		k++;
    	}
    	if(d[i][n]>0)
    		break;
    }	

    for(int i=m+1;i<8;i++){
    	if(d[i][n]<0){
    		cout << d[i][n] << ' ';
    		k++;
    	}
    	if(d[i][n]>0)
    		break;
    }
 	
 	for(int i=n-1;i>0;i--){
 		if(d[m][i]<0){
    		cout << d[m][i] << ' ';
    		k++;
    	}
    	if(d[m][i]>0)
    		break;
 	}

 	for(int i=n+1;i<8;i++){
 		if(d[m][i]<0){
    		cout << d[m][i] << ' ';
    		k++;
    	}
    	if(d[m][i]>0)
    		break;
 	}

 	//deplasari in diagonala dreapta sus
 	int i=m,j=n;
 	while(i>=0 && j<8){
 		i--;
		j++;
		if(d[i][j]<0){
			cout << d[i][j] << ' ';
			k++;
		}
		if(d[i][j]>0)
			break;
 	}
 	//deplasari in diagonala stanga sus
 	i=m;
 	j=n;
 	while(i>=0 && j>0){
 		i--;
 		j--;
 		if(d[i][j]<0){
			cout << d[i][j] << ' ';
			k++;
		}
		if(d[i][j]>0)
			break;
 	}
 	//deplasari in diagonala stanga jos
 	i=m;
 	j=n;
 	while(i<8 && j>0){
 		i++;
 		j--;
 		if(d[i][j]<0){
			cout << d[i][j] << ' ';
			k++;
		}
		if(d[i][j]>0)
			break;
 	}
 	//deplasari in diagonala dreapta jos
 	i=m;
 	j=n;
 	while(i<8 && j<8){
 		i++;
 		j++;
 		if(d[i][j]<0){
			cout << d[i][j] << ' ';
			k++;
		}
		if(d[i][j]>0)
			break;
 	}


 	cout << endl;

    return 0;
}
