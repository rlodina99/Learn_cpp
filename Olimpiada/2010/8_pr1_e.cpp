#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main(){

	ifstream f("8_pr1_e.in");

	struct Cladire{
		int Long;			//12 
		int Lat;			//7
		int Intensitate;
	};

	Cladire arr[100];

	int longCutrem,latCutrem,intensCutrem;
	f >> longCutrem >> latCutrem >> intensCutrem;
	int auxIntensCutrem=intensCutrem;
	int n=0, nr;
	while(1){
		
		f >> nr;
		if(f.eof())
			break;

		arr[n].Long=nr;

		f >> arr[n].Lat >> arr[n].Intensitate;
		n++;
	}

	
	int afectate=0;
	int a=1;
	int maxAfectateNivel=0;
		while(a<=latCutrem){
			int max=0;
			intensCutrem--;
			for(int i=longCutrem-a;i<=longCutrem+a;i++){//sus
				for(int j=0;j<n;j++){
					if(arr[j].Long==i && arr[j].Lat==latCutrem-a && arr[j].Intensitate<intensCutrem){
						afectate++;
						max++;
						cout << arr[j].Long << ' ' << arr[j].Lat << '\n';
						break;
					}
				}
			}
			
			for(int i=latCutrem-a+1;i<=latCutrem+a-1;i++){//DREAPTA
				for(int j=0;j<n;j++){
					if(arr[j].Long==longCutrem+a && arr[j].Lat==i && arr[j].Intensitate<intensCutrem){
						afectate++;
						max++;
						cout << arr[j].Long << ' ' << arr[j].Lat << '\n';
						break;
					}
				}
			}
			
			for(int i=longCutrem-a;i<=longCutrem+a;i++){//JOS
				for(int j=0;j<n;j++){
					if(arr[j].Long==i && arr[j].Lat==latCutrem+a && arr[j].Intensitate<intensCutrem){
						afectate++;
						max++;
						cout << arr[j].Long << ' ' << arr[j].Lat << '\n';
						break;
					}
				}		
			}
			
			for(int i=latCutrem-a+1;i<=latCutrem+a-1;i++){//STANGA
				for(int j=0;j<n;j++){
					if(arr[j].Long==longCutrem-a && arr[j].Lat==i && arr[j].Intensitate<intensCutrem){
						afectate++;
						max++;
						cout << arr[j].Long << ' ' << arr[j].Lat << '\n';
						break;
					}
				}
			}
				if(max>maxAfectateNivel)
					maxAfectateNivel=max;
				a++;
			}

		cout << '\n' << afectate << '\n' << maxAfectateNivel << '\n';

		a=1;
		while(a<=latCutrem){
			int max=0;
			auxIntensCutrem--;
			for(int i=longCutrem-a;i<=longCutrem+a;i++){//sus
				for(int j=0;j<n;j++){
					if(arr[j].Long==i && arr[j].Lat==latCutrem-a && arr[j].Intensitate<auxIntensCutrem){
						max++;
						break;
					}
				}
			}
			
			for(int i=latCutrem-a+1;i<=latCutrem+a-1;i++){//DREAPTA
				for(int j=0;j<n;j++){
					if(arr[j].Long==longCutrem+a && arr[j].Lat==i && arr[j].Intensitate<auxIntensCutrem){
						max++;
						break;
					}
				}
			}
			
			for(int i=longCutrem-a;i<=longCutrem+a;i++){//JOS
				for(int j=0;j<n;j++){
					if(arr[j].Long==i && arr[j].Lat==latCutrem+a && arr[j].Intensitate<auxIntensCutrem){
						max++;
						break;
					}
				}		
			}
			
			for(int i=latCutrem-a+1;i<=latCutrem+a-1;i++){//STANGA
				for(int j=0;j<n;j++){
					if(arr[j].Long==longCutrem-a && arr[j].Lat==i && arr[j].Intensitate<auxIntensCutrem){
						max++;
						break;
					}
				}
			}
			if(max==maxAfectateNivel)
				cout << a << ' ';
			a++;
			}

	return 0;

}
	

