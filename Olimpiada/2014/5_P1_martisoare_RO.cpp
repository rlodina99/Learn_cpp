#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{

    ifstream f("martisoare.in");
    ofstream g("martisoare.out");

    int n;
    f >> n;
    int arr[n];
    for(int i=0;i<n;i++){
    	f >> arr[i];
    }
    int ok=1;
    for (int i = 0; i < n-1; i++)
    {
    	if(arr[i]>arr[i+1]){
    		ok=0;
    		break;
    	}
    }
    if(ok==1){								//pentru 0 nr
    	g << 0 << ' ' << 0;
    	g << '\n' << arr[n-1];
    }
    else{

    	int nrBun,indexNrBun;
    	for (int i = 0; i < n-2; i++)
    	{
    		if(arr[i]+1==arr[i+1] && arr[i+1]+1==arr[i+2]){
    			nrBun=arr[i];
    			indexNrBun=i;
    		}
    	}

    	int a=0,indexA,b=0,indexB;
    	for (int i = 0; i < indexNrBun; i++)
    	{
    		if(arr[i]!=nrBun-(indexNrBun-i))
    			if(a==0){
    				a=arr[i];
    				indexA=i;
    			}
    			else{
    				b=arr[i];
    				indexB=i;
    			}
    		if(a!=0 && b!=0)
    			break;
    	}
    	for (int i = indexNrBun; i < n; i++)
    	{
    		if(arr[i]!=nrBun+(i-indexNrBun))
    			if(a==0){
    				a=arr[i];
    				indexA=i;
    			}
    			else{
    				b=arr[i];
    				indexB=i;
    			}
    		if(a!=0 && b!=0)
    			break;
    	}


		

		if(a==0 || b==0){						//pt 1 nr
			if(a==0){

				int nrBunB;
				if(indexB<indexNrBun)
		    		nrBunB=nrBun-indexNrBun-indexB;
		    	else
		    		nrBunB=nrBun+indexB-indexNrBun;

				int cifrA=0,cifrB=0;

				while(b){
					if(b%10!=nrBunB%10){
						if(cifrA==0)
							cifrA=b%10;
						else
							cifrB=b%10;
					}
						if(cifrA!=0 && cifrB!=0)
							break;
					b=b/10;
					nrBunB=nrBunB/10;
				}

				if(cifrA<cifrB)
					g << cifrA << ' ' << cifrB;
				else
					g << cifrB << ' ' << cifrA;
				g << '\n';
				g << arr[indexNrBun]+n-1-indexNrBun;

			

			}
			else{

				int nrBunA;
		    	if(indexA<indexNrBun)
		    		nrBunA=nrBun-indexNrBun-indexA;
		    	else
		    		nrBunA=nrBun+indexA-indexNrBun;
		    	
				int cifrA=0,cifrB=0;
				while(a){
					if(a%10!=nrBunA%10){
						if(cifrA==0)
							cifrA=a%10;
						else
							cifrB=a%10;
					}
						if(cifrA!=0 && cifrB!=0)
							break;
					a=a/10;
					nrBunA=nrBunA/10;
				}
				
				
				if(cifrA<cifrB)
					g << cifrA << ' ' << cifrB;
				else
					g << cifrB << ' ' << cifrA;
				g << '\n';
				g << arr[indexNrBun]+n-1-indexNrBun;
				
			}


		}
		else{											//pt 2 nr

	    	int nrBunA,nrBunB;
	    	if(indexA<indexNrBun)
	    		nrBunA=nrBun-(indexNrBun-indexA);
	    	else
	    		nrBunA==nrBun+(indexA-indexNrBun);

	    	if(indexB<indexNrBun)
	    		nrBunB=nrBun-(indexNrBun-indexB);
	    	else
	    		nrBunB==nrBun+(indexB-indexNrBun);

			int cifrA,cifrB;
				while(a){
					if(a%10!=nrBunA%10){
						cifrA=a%10;
						break;
					}
					a=a/10;
				}
				
				while(b){
					if(b%10!=nrBunB%10){
						cifrB=b%10;
						break;
					}
					b=b/10;
				}

				if(cifrA<cifrB)
					g << cifrA << ' ' << cifrB;
				else
					g << cifrB << ' ' << cifrA;
				g << '\n';
				g << arr[indexNrBun]+n-1-indexNrBun;
		}
    }

    g << '\n';
    return 0;
}