#include <iostream>
#include <fstream>

using namespace std;


int main(){

	ifstream f("pluton.in");
	ofstream fOut("pluton.out");
	
	int n;
	f >> n;

	int arr[n];
	for(int i=0;i<n;i++){
		f >> arr[i];
	}


	int a,ua,b,ub,aux1,aux2,cifreLaFel=0,cifre1=0,cifre2=0,lafel=1,maxlafel=0,plutoane=0;

	for(int i=0;i<n;i++){
		lafel=1;
		cifre1=0;
		aux1=arr[i];
		while(aux1){
			cifre1++;
			aux1=aux1/10;
		}
		for(int j=i+1;j<n;j++){
			cifre2=0;
			aux2=arr[j];
			while(aux2){
				cifre2++;
				aux2=aux2/10;
			}
			if(cifre1==cifre2){
				a=arr[i];
				cifreLaFel=0;
				while(a){
					ua=a%10;
					b=arr[j];
					while(b){
						ub=b%10;
						if(ua==ub){
							cifreLaFel++;
							break;
						}
						b=b/10;
					}
					a=a/10;
				}
				if(cifreLaFel==cifre1){
					lafel++;
				}
			}
		}
		if(lafel>maxlafel)
			maxlafel=lafel;
		if(lafel==1)
			plutoane++;
	}
	fOut << plutoane+1 << '\n' << maxlafel;



	//numărul de plutoane care au numărul maxim de soldaţi recuperaţi
	//conţine componenţa unui astfel de pluton



	

	int max=0;

	for(int i=0;i<n;i++){
		lafel=1;
		cifre1=0;
		aux1=arr[i];
		while(aux1){
			cifre1++;
			aux1=aux1/10;
		}
		for(int j=i+1;j<n;j++){
			cifre2=0;
			aux2=arr[j];
			while(aux2){
				cifre2++;
				aux2=aux2/10;
			}
			if(cifre1==cifre2){
				a=arr[i];
				cifreLaFel=0;
				while(a){
					ua=a%10;
					b=arr[j];
					while(b){
						ub=b%10;
						if(ua==ub){
							cifreLaFel++;
							break;
						}
						b=b/10;
					}
					a=a/10;
				}
				if(cifreLaFel==cifre1){
					lafel++;
				}
			}
		}
		if(lafel==maxlafel){
			max++;
		}

	}

	fOut << "\n" << max << '\n';

	int brr[100];
	for(int k=0;k<10;k++){
		brr[k]=0;
	}
	int m=0;
	for(int i=0;i<n;i++){
		brr[m]=arr[i];
		m++;
		lafel=1;
		cifre1=0;
		aux1=arr[i];
		while(aux1){
			cifre1++;
			aux1=aux1/10;
		}
		for(int j=i+1;j<n;j++){
			cifre2=0;
			aux2=arr[j];
			while(aux2){
				cifre2++;
				aux2=aux2/10;
			}
			if(cifre1==cifre2){
				a=arr[i];
				cifreLaFel=0;
				while(a){
					ua=a%10;
					b=arr[j];
					while(b){
						ub=b%10;
						if(ua==ub){
							cifreLaFel++;
							break;
						}
						b=b/10;
					}
					a=a/10;
				}
				if(cifreLaFel==cifre1){
					lafel++;
					brr[m]=arr[j];
					m++;
				}
			}
		}
		if(lafel==maxlafel){
			for(int k=0;k<10;k++){
				if(brr[k]!=0)
					fOut << brr[k] << ' ';
			}
		}
		
		for(int i=0;i<10;i++){
			brr[i]=0;
		}
	}

	return 0;
}