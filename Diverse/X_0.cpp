#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){	
	

	int d[3][3];

	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			d[i][j] = 0;
		}
	}

	char ch;
	do {
		system("cls");
		cin >> ch;

		cout << ch;
	} while (ch != '0');
	

	return 0;
}