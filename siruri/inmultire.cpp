#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("inmultire.in");

	int a,b,cifa=0,cifb=0;
	f >> a >> b;
	int a1=a;
	while(a1){
		cifa++;
		a1=a1/10;
	}
	cout << "Termenul A " << a << " arr[" << cifa << "]= ";
	int b1=b;
	while(b1){
		cifb++;
		b1=b1/10;
	}
	int arr[cifa];
	for(int i=0;i<cifa;i++){
		int c=a%10;
		arr[cifa-i-1]=c;
		a=a/10;
	}
	for (int i = 0; i < cifa; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	cout << "Termenul B " << b << " brr[" << cifb << "]= ";
	
	int brr[cifb];

	for(int i=0;i<cifb;i++){
		int c=b%10;
		brr[cifb-i-1]=c;
		b=b/10;
	}
	for (int i = 0; i < cifb; ++i)
	{
		cout << brr[i] << ' ';
	}
	cout << endl;

	int rez_lin = cifb + 1;
	int rez_cols = cifa + cifb;
	int rez[rez_lin][rez_cols];


	cout << "   rez[" << rez_lin << "][" << rez_cols <<"]" << endl;
	//init rezultat cu 0
	for(int i=0;i<rez_lin;i++){
		for(int j=0;j<rez_cols;j++){
			rez[i][j]=0;
		}
	}

	cout << endl;

	int depasire = 0;
	for(int i=0;i<cifb;i++){
		depasire = 0;
		int x=brr[cifb-1-i];

		for(int j=0;j<cifa;j++){						
			int y=arr[cifa-1-j];

			if(x*y>=10){
				rez[i][rez_cols-1-i-j]=(x*y)%10;
				depasire=(x*y)/10;
			}
			else
				if(depasire!=0){
					if(x*y+depasire>=10){
						rez[i][rez_cols-1-i-j]=(x*y+depasire)%10;
						depasire=1;
					}
					else{
					rez[i][rez_cols-1-i-j]=x*y+depasire;
					depasire=0;
					}
				}
				else
					rez[i][rez_cols-1-i-j]=x*y;
		}
		cout << endl;
	}
	cout << endl;



	


	int suma=0;
	for(int i=rez_cols-1;i>0;i--){
		suma=0;
		for(int j=0;j<rez_lin-1;j++){
			suma+=rez[j][i];
		}
		suma+=depasire;
		if(suma>=10){
			rez[rez_lin-1][i]=suma%10;
			depasire=suma/10;
		}
		else{
			rez[rez_lin-1][i]=suma;
			depasire=0;
		}
	}

	for(int i=0;i<rez_lin;i++){
		for(int j=0;j<rez_cols;j++){
			cout << rez[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}

