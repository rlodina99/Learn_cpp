#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	
	for(int i=100;i<1000;i++){
		int k=i;
		int s=0;
		while(k){
			s+=1/k%10;
			k=k/10;
		}
		if((i%10>i/10%10)&&(i/10%10>i/100%10)&&s<1)
			cout << i << ' ';
	}
	
	return 0;
	
}