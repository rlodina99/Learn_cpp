#include <iostream>
#include <fstream>

using namespace std;


int main(){
	ifstream f("pluton.in");
	
	int n;
	f >> n;

	int arr[n];
	int x;
	int tmp[10];
	int cifre;
	for(int i=0;i<n;i++){
		f >> x;
		cout << x << "-> ";
		cifre = 0;
		while(x){
			tmp[cifre] = x%10;
			cout << tmp[cifre] << ' ';
			x = x/10;
			cifre++;
		}
		cout << "  == ";
		int ok=1;
		do{
			ok = 1;
			int aux;
			for(int k=0; k<cifre-1; k++){
				if (tmp[k]<tmp[k+1]){
					aux = tmp[k];
					tmp[k] = tmp[k+1];
					tmp[k+1] = aux;
					ok = 0;
				}
			}
		}while(ok != 1);
		cout << "( ";
		int nr = 0;
		for(int k=0; k<cifre; k++){
			cout <<  tmp[k] << " ";
			nr = nr * 10 + tmp[k];
		}
		cout << ") ";
		arr[i] = nr;
		cout << arr[i] << '\n' ;
	}

	cout << "\n";
	int pRefacute = 0;
	for(int i =0; i< n; i++){
		for(int j = i+1; j< n; j++){
			if (arr[i] == arr[j]){
				pRefacute ++;
			}
		}
	}

	cout << "\nPlutoane recfacute " << pRefacute;
   return 0;
}
