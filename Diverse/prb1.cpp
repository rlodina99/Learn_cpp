#include <iostream>
#include <fstream>
using namespace std;

//sortare prin metoda buble sort
int main(){
	ifstream f("prb.in");

	int e;		// nr. de elemente
	f >> e;
	int nr[e];	// vectorul

	//citire continut vector
	for(int i =0; i< e; i++){
		f >> nr[i];
	}
	
	int isOk = 0;
	do{
		isOk = 1;
		for(int i=0; i< e-1; i++){
			if (nr[i] > nr[i+1]){
				int aux = nr[i];
				nr[i] = nr[i+1];
				nr[i+1] = aux;
				isOk = 0;
			}
		}

	}while (isOk != 1);

 	for(int i=0;i<e;i++)
 		cout << nr[i] << ' ';

	return 0;
}