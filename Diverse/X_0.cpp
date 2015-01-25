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

	int cell;
	int player = 1;
	do {
		system("cls");
		cin >> cell;

		if (cell == 1'){
			if (cell[0][0] !=0 ) continue;
			d[0,0] = player;
		}
		else if (cell=='2')
		cout << cell;
	} while (cell != '0');
	

	return 0;
}