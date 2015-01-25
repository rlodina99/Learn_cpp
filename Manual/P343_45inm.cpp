#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P343_45.in");
	
	int n;
	f >> n;
	int a[n];
	

	for(int i=0;i<n;i++){
		f >> a[i];
		cout << a[i] << ' ';
	}
	cout << "\n";
	
	int m;
	f >> m;
	int b[m];
	for(int i=0;i<m;i++){
		f >> b[i];
		cout << b[i] << ' ';
	}

	cout << "\n" << "\n";
	int x=n-m+m;
	int y=m-n+n;
	int b1[x];
	int a1[y];
	if(n>m){
		int cdif,c2dif,dif=0;
		dif=n-m;
		c2dif=dif;
		cdif=dif;
		for(int i=0;cdif;cdif--){
			b1[i]=0;
			i++;
		}
		int p=0;
		for(int i=dif;dif<m+c2dif;dif++){
			b1[i]=b[p];
			p++;
			i++;
		}
		for(int i=0;i<x;i++){
			cout << b1[i] << ' ';
		}

		int s[n+1];
		int s1=1;
		for(int i=0;i<n+1;i++){
			if(a[x-s1]+b1[x-s1]>10){
				b1[x-s1-1]+=1;
				s[i]=(a[x-s1]+b1[x-s1])%10;
			}
			if(a[x-s1]+b1[x-s1]==10){
				b1[x-s1-1]+=1;
				s[i]=0;
			}
			if(a[x-s1]+b1[x-s1]<10){
				s[i]=a[x-s1]+b1[x-s1];
			}
			s1++;
		}
		cout << endl;
		for(int i=x-1;i>=0;i--){
		cout << s[i] << ' ';
		}







	}
	else{
		int cdif,c2dif,dif=0;
		dif=m-n;
		c2dif=dif;
		cdif=dif;
		for(int i=0;cdif;cdif--){
			a1[i]=0;
			i++;
		}
		int p=0;
		for(int i=dif;dif<n+c2dif;dif++){
			a1[i]=a[p];
			p++;
			i++;
		}
		for(int i=0;i<y;i++){
			cout << a1[i] << ' ';
		}

		int s[m+1];
		int s1=1;
		for(int i=0;i<m+1;i++){
			if(a1[y-s1]+b[y-s1]>10){
				a1[y-s1-1]+=1;
				s[i]=(a1[y-s1]+b[y-s1])%10;
			}
			if(a1[y-s1]+b[y-s1]==10){
				a1[y-s1-1]+=1;
				s[i]=0;
			}
			if(a1[y-s1]+b[y-s1]<10){
				s[i]=a1[y-s1]+b[y-s1];
			}
			s1++;
		}
		cout << endl;
		for(int i=y-1;i>=0;i--){
		cout << s[i] << ' ';
		}
		
		}


		
	
	 
	


  

   


	return 0;
	
}