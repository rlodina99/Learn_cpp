#include <iostream>
#include <fstream>
using namespace std;


//sortare prin metoda buble sort
int main(){
	ifstream f("data.in");
	int nr[100];
	int i=0;
	do {
		f >> nr[i++];
	} while (nr[i] != 0);

	
	return 0;
}