#include <iostream>
#include <fstream>

using namespace std;

#define INPUT_FILE "P104_25.in"

int sumaCifre(int a){
	int s=0;
	while(a){
		s+=a%10;
		a=a/10;
	}
	return s;
}

int main(){

	fstream f(INPUT_FILE);

	int n;
	f >> n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		f >> arr[i];
		cout << arr[i] << " ";
	}
	cout << "\n";
	for(int i=0;i<n;i+=2){
		int aux1=arr[i];
		int s1=0;
		while(aux1){
			s1+=aux1%10;
			aux1=aux1/10;
		}
		int aux2=arr[i+1];
		int s2=0;
		while(aux2){
			s2+=aux2%10;
			aux2=aux2/10;
		}
		if(s1==s2)
			cout << '(' << arr[i] << ',' << arr[i+1] << ") ";
		
	}
	cout << "\nVarianta fara sir\n";

	f.close();
	f.open(INPUT_FILE);

	
	f >> n;
	int i=0;
	int ultimulNr=0,nr,k=0;
	while(i<n){
		f >> nr;
		if (k && sumaCifre(nr) == sumaCifre(ultimulNr)){
			cout << "(" << ultimulNr << ',' << nr << ") ";
		}
		k=1;
		ultimulNr=nr;

		i++;
	}

	

	return 0;
	
}