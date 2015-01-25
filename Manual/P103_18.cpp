#include <iostream>

using namespace std;

int main(){


	int k=0;

	for(int i=10;i<100;i++){
		if(i%2!=0){
			cout << i << ' ';
			k++;
		}         
		if(k%3==0)
			cout << endl;
	}





	return 0;
	
}