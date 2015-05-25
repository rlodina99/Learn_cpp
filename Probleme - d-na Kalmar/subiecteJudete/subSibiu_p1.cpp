#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;


int main (){
		ifstream f("subSibiu_p1.in");
		int n=0;
		int arr[100];
		int nr;
		while (1){
			f >> nr;
			if (f.eof()) 
				break;
			arr[n] = nr;
			n++;
		}
		
		int cifraCareApare=0;
		for (int i = 0; i < n-1; i++)
		{
			int cifreAsem=0,cifreI=0;
			int cifreI_1=0;
			int auxI=arr[i];
			int auxI_1=arr[i+1];
			//determinam nr de cifre a lui i si i+1
			while(auxI){
				cifreI++;
				auxI=auxI/10;
			}
			while(auxI_1){
				cifreI_1++;
				auxI_1=auxI_1/10;
			}
			auxI=arr[i];
			
			if(cifreI>cifreI_1){
				for(int i=0;i<cifreI;i++){
					auxI_1=arr[i+1];
					for(int j=0;j<cifreI_1;j++){
						if(auxI%10==auxI_1%10){
							cifreAsem++;
							break;
						}
						auxI_1=auxI_1/10;
					}
					auxI=auxI/10;
				}
			}
			else{
				auxI_1=arr[i+1];
				for(int i=0;i<cifreI_1;i++){
					auxI=arr[i];
					for(int j=0;j<cifreI;j++){	
						if(auxI%10==auxI_1%10){
							cifreAsem++;
							break;
						}
						auxI=auxI/10;
					}
					auxI_1=auxI_1/10;
				}
			}
			if(cifreAsem!=0)
				cifraCareApare++;
		}
		if(cifraCareApare==n-1)
			cout << "DA";
		else
			cout << "NU";

		int okFinal=0;
		cout << '\n';
		for(int i=0; i<n-1; i++){
			int ok=0;
			int a=arr[i];
			int b=arr[i+1];
			int cifreA=0,cifreB=0;
			while(a){
				cifreA++;
				a=a/10;
			}
			while(b){
				cifreB++;
				b=b/10;
			}
			a=arr[i];
			b=arr[i+1];

			int brr[100];
			for (int j = 0; i < 100; i++)
			{
				brr[i]=0;
			}

			if(cifreA==cifreB){ //
				if(arr[i]!=arr[i+1]){
					ok=0;
					cout << "NU";
					break;
				}
				else
					ok=1;	
			}
			if(cifreA>cifreB){ //
				for(int j=0;j<cifreA;j++){
					brr[j]=(a/(int)pow(10,cifreB-j))%10;
				}
				int aux=cifreB;
				while(aux){
					for(int j=0;j<cifreA;j++){
						if(brr[j]==b%10){
							b=b/10;
							ok++;
						}
					}
					aux--;
				}
				if(ok!=cifreB){
					ok=0;
					cout << "NU";
					break;
					
				}
				else
					ok=1;
			} 
			if(cifreB>cifreA){ //
				for(int j=0;j<cifreB;j++){
					brr[j]=(b/(int)pow(10,cifreB-j))%10;
				}
				int aux=cifreA;
				while(aux){
					for(int j=0;j<cifreB;j++){
						if(brr[j]==a%10){
							a=a/10;
							ok++;
						}
					}
					aux--;
				}
				if(ok!=cifreA){

					ok=0;
					cout << "NU";
					break;
				}
				else
					ok=1;
			}
			if(ok==0){
				
				cout << "NU";
				break;
			}
			okFinal=ok;
		}
		if(okFinal==1)
			cout << "DA";


		return 0;
}