#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream f("cuart.in");
	ofstream g("cuart.out");

	int p,n;
	f >> p >> n;
	int arr[n];
	int brr[n];

	for(int i=0;i<n;i++){
		f >> arr[i];
	}

	for(int i=0;i<n;i++){
		f >> brr[i];
	}



	if(p==1){
		int max1=0,max2=0;
		int aux,cifre,pare,impare;
		for(int i=0;i<n;i++){
			cifre=0;
			pare=0;
			aux=arr[i];
			while(aux){
				if((aux%10)%2==0)
					pare++;
				cifre++;
				aux=aux/10;
			}
			if(pare==cifre && max1<arr[i])
				max1=arr[i];
		}

		for(int i=0;i<n;i++){
			cifre=0;
			impare=0;
			aux=brr[i];
			while(aux){
				if((aux%10)%2!=0)
					impare++;
				cifre++;
				aux=aux/10;
			}
			if(impare==cifre && max2<brr[i])
				max2=brr[i];
		}

		if(max1==max2)
			g << 0;
		else
			if(max1>max2)
				g << max1;
			else
				g << max2;

	}
	else{
		if(p==2){
			int aux;

			for(int i=0;i<n;i++){
				aux=arr[i];
				arr[i]=0;
				while(aux){
					if((aux%10)%2!=0)
						arr[i]=10*arr[i]+aux%10;
					aux=aux/10;
				}

			}

			for(int i=0;i<n;i++){
				aux=brr[i];
				brr[i]=0;
				while(aux){
					if((aux%10)%2==0)
						brr[i]=10*brr[i]+aux%10;
					aux=aux/10;
				}

			}

			for(int i=0;i<n;i++){
				aux=arr[i];
				arr[i]=0;
				while(aux){
					arr[i]=arr[i]*10+aux%10;
					aux=aux/10;
				}
			}

			for(int i=0;i<n;i++){
				aux=brr[i];
				brr[i]=0;
				while(aux){
					brr[i]=brr[i]*10+aux%10;
					aux=aux/10;
				}
			}

			int v1[n];
			for (int i = 0; i < n; i++)
			{
				v1[i]=0;
			}
			int v2[n];
			for (int i = 0; i < n; i++)
			{
				v2[i]=0;
			}


		
			
			int suma=0,k=0,cuart1=0;
			for(int i=0;i<n;i++){
				suma=0;
				if(arr[i]!=0){
					for(int j=1;j<arr[i];j+=4){
						if(suma>arr[i])
							break;
						suma+=j;
						if(suma==arr[i]){
							cuart1++;
							break;
						}

					}
				}
			}


			int cuart2=0;
			for(int i=0;i<n;i++){
				suma=0;
				if(brr[i]!=0){
					for(int j=1;j<brr[i];j+=4){
						if(suma>brr[i])
							break;
						suma+=j;
						if(suma==brr[i]){
							cuart2++;
							break;
						}

					}
				}
				
			}
			


			if(cuart1==cuart2)
				g << 0;
			else{
				if(cuart1>cuart2)
					g << cuart1;
				else
					g << cuart2;
			}
		




		}
		else{












		}
	}

	return 0;
}