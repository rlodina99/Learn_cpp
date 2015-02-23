#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("P1_imprimanta.in");

	int n,m;
	f >> n >> m;
	int cifre=0,aux=n,aux2=n,maxArr=0,minBrr=999;
	while(aux){
		cifre++;
		aux=aux/10;
	}

	int arr[cifre];
		for(int i=0;i<cifre;i++){
			arr[i]=aux2%10;
			aux2=aux2/10;
	}

	int brr[cifre];

	for(int i=0;i<cifre;i++){
		if(n%10==0)
			brr[i]=12;
		else
			if(n%10==1)
				brr[i]=5;
			else
				if(n%10==2)
					brr[i]=11;
				else
					if(n%10==3)
						brr[i]=11;
					else
						if(n%10==4)
							brr[i]=9;
						else
							if(n%10==5)
								brr[i]=11;
							else
								if(n%10==6)
									brr[i]=12;
								else
									if(n%10==7)
										brr[i]=7;
									else
										if(n%10==8)
											brr[i]=13;
										else
											if(n%10==9)
												brr[i]=12;
		n=n/10;
	}

	for(int i=0;i<cifre;i++){
		if(maxArr<arr[i] && minBrr>=brr[i]){
			maxArr=arr[i];
			minBrr=brr[i];
		}
	}
	cout << maxArr;

	return 0;

}
