#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main(){
	fstream f("P107_39.in");
	int x;
	f >> x;

	int s=1;
	int i=1;

	while(s<x){
		s=s*i;
		i++;

	}
	cout << i-1;
	return 0;
	
}