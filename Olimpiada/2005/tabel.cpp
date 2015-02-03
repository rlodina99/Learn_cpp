#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("tabel.in");
    int n,m,p;
    f >> n >> m;

    int mat[n+1][m+1];

    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		mat[i][j]=0;
    	}
    }
	f >> p;

	while(p){
		int l,c,v;
		f >> l >> c >> v;
		mat [l][c]=v;
		p--;
	}

	for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cout << mat[i][j] << ' ';
    	}
    	cout << endl;
    }

    int allOk;
    do{
    	allOk=1;
	    for(int i=1;i<=n;i++){
	    	for(int j=1;j<=m;j++){
	    		if(mat[i][j]==0){
	    			int okCol=1;
	    			int suma=0;
	    			for(int k=1;k<=n;k++){
	    				if(mat[k][j]==0 && k!=i){
	    					okCol=0;
	    					break;
	    				}
	    			}
	    			if (okCol==1){
	    				for(int k=1;k<n;k++)
	    					suma+=mat[k][j];
	    				mat[i][j]=mat[n][j]-suma;
	    			}
	    			else{
	    				int okLin=1;
	    				for(int k=1;k<=m;k++){
	    					if(mat[i][k]==0 && k!=j){
	    						okLin=0;
	    						break;
	    					}
	    				}
	    				if(okLin==0){
	    					allOk=0;
	    				}
	    				else{
	    					for(int k=1;k<m;k++)
	    						suma+=mat[i][k];
	    					mat[i][j]=mat[i][m]-suma; 				
	    				}	
	    			}


	    		}
	    	} 	
	    }
    }while(allOk!=1);

    cout << endl;
	for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cout << mat[i][j] << ' ';
    	}
    	cout << endl;
    }

    return 0;
}