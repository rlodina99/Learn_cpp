#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
	ifstream f("P8.in");

	int n;
	f >> n;
	int a1[n];
	int a2[n];

	for (int i=0; i<n; i++){
		f >> a1[i];
	}

	for (int i=0; i<n; i++){
		f >> a2[i];
	}

	int s=0;
    for (int i=0; i<n; i++){
    	 s+= pow(a1[i], a2[i]);
		
	}
	
    cout << s;

	return 0;
}