#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("Ex2.in");
    int m,n;
    f >> m >> n;
    int arr[m+n];


    int d[m][n];

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			f>> d[i][j];
		}
	}

	int s=0,k=0,p=0;
	while(k<m){
        for(int i=0; i<n; i++){
            s+=d[k][i];
            arr[k]=s;
        }
        k++;
        s=0;
	}

	//cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << endl;;
    while(p<n){
        for(int i=0; i<m; i++){
                s+=d[i][p];
                arr[k]=s;
        }
        p++;
        k++;
        s=0;
    }

    //cout << arr[3] << ' ' << arr[4] << endl;;


    int ok=0,aux;
	 while(ok==0){
	 	ok=1;
	 	for(int k=0; k<m+n-1; k++){
	 		if(arr[k]< arr[k+1]){
		 		aux=arr[k+1];
		 		arr[k+1]=arr[k];
		 		arr[k]=aux;
		 		ok=0;
	 		}
	 	}

	 }

	 for (int k=0; k<m+n; k++){
		cout << arr[k] << ' ' ;
	}


    return 0;
}
