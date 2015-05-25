#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("nebuni.in");
    ofstream g("nebuni.out");

    int n, m,a,b;
    f >> n >> m;
    int mat[n+1][n+1];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		mat[i][j]=0;
    	}
    }

    while(m){
    	f >> a >> b;
    	mat[a][b]=1;
    	m--;
    }
    
    int l,c;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(mat[i][j]==1){

    			//stanga sus
    			l=i;
    			c=j;
    			while(l>0 && c>0){
    				if(mat[l][c]==0)
    					mat[l][c]=9;
    				l--;
    				c--;
    			}
    			//dreapta sus
    			l=i;
    			c=j;
    			while(l>0 && c<=n){
    				if(mat[l][c]==0)
    					mat[l][c]=9;
    				l--;
    				c++;
    			}
    			//stanga jos
    			l=i;
    			c=j;
    			while(l<=n && c>0){
    				if(mat[l][c]==0)
    					mat[l][c]=9;
    				l++;
    				c--;
    			}
    			//dreapta jos
    			l=i;
    			c=j;
    			while(l<=n && c<=n){
    				if(mat[l][c]==0)
    					mat[l][c]=9;
    				l++;
    				c++;
    			}

    		}
    	} 	
    }

    int zero=0;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(mat[i][j]==0)
    			zero++;
    	}
    }
    g << zero;

    return 0;
}
