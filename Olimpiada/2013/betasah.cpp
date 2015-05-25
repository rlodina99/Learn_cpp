#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main(){

	ifstream f("betasah.in");

	int n,d,k;
	f >> n >> d >> k;
	int mat[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			mat[i][j]=0;
		}
	}


	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			mat[i][j]=9;
		}
	}



	int x,y;
	for(int i=0;i<d;i++){
		f >> x >> y;
		mat[x-1][y-1]=3;
	}
	for(int i=0;i<k;i++){
		f >> x >> y;
		mat[x-1][y-1]=1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			{
				cout << mat[i][j] << ' ';
			}	
			cout << '\n';
	}

	int maxPatrateAlbePeRand=0,max;
	for(int i=0;i<n;i++){
		max=0;
		for(int j=0;j<n;j++){
			if(mat[i][j]==0)
				max++;
		}
		if(max>maxPatrateAlbePeRand)
			maxPatrateAlbePeRand=max;
	}
	cout << maxPatrateAlbePeRand;

	//NUMARAM nr de patrate

	int albe =0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			{

				if(mat[i][j]==3){

					//DREAPTA
					
					for(int g=j+1;g<n;g++){
						if(mat[i][g]==0){
							albe++;
							mat[i][g]=11;
						}
						if(mat[i][g]==1 || mat[i][g]==9)
							break;
					}
					
					//STANGA
					
					for(int g=j-1;g>=0;g--){
						if(mat[i][g]==0){
							albe++;
							mat[i][g]=11;
						}
						if(mat[i][g]==1 || mat[i][g]==9)
							break;
					}
					
					//SUS
					for(int k=i-1;k>=0;k--){
						if(mat[k][j]==0){
							albe++;
							mat[k][j]=11;
						}
						if(mat[k][j]==1 || mat[k][j]==9)
							break;					
					}
					//JOS
					for(int k=i+1;k<n;k++){						
						if(mat[k][j]==0){
							albe++;
							mat[k][j]=11;
						}
						if(mat[k][j]==1 || mat[k][j]==9)
							break;
					}
					//STANGA SUS
					int l=i-1;
					int c=j-1;
					while(l>=0 && c>=0){
						if(mat[l][c]==0){
							albe++;
							mat[l][c]=11;
						}
						if(mat[l][c]==1 || mat[l][c]==9)
							break;	
						l--;
						c--;	
					}
					//DREAPTA JOS
					l=i+1;
					c=j+1;
					while(l<n && c<n){
						if(mat[l][c]==0){
							albe++;
							mat[l][c]=11;
						}
						if(mat[l][c]==1 || mat[l][c]==9)
							break;	
						l++;
						c++;	
					}
					//STANGA JOS
					l=i+1;
					c=j-1;
					while(l<n && c>=0){
						if(mat[l][c]==0){
							albe++;
							mat[l][c]=11;
						}
						if(mat[l][c]==1 || mat[l][c]==9)
							break;	
						l++;
						c--;	
					}
					//DREAPTA SUS
					l=i-1;
					c=j+1;
					while(l>=0 && c<n){
						if(mat[l][c]==0){
							albe++;
							mat[l][c]=11;
						}
						if(mat[l][c]==1 || mat[l][c]==9)
							break;	
						l--;
						c++;	
					}
				}
			}
		}
		cout << '\n' << albe <<'\n';	
	


	return 0;

}