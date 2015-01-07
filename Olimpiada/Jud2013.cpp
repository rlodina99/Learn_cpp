#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
	ifstream f("Jud2013.in");
	int n;		//nr de cladiri
	f>> n;

	int cladiri[n, 10];	//pt. fiecare cladire pasteeaza nr de turnuri

	//cladiri[2,i] - inaltimea turnului i de la cladireea a 2-a
	//cladiri[i, 9] - nr de turnuri al cladiri i (nr. de cifre)

	for(int i=0; i<n; i++){
		int x;
		f >> x;

		int nrCifre =0;
		int x2 = x;
		while ( x2!=0) {
			x2 = x2/10;
			nrCifre++;
		}

		cladiri[i, 9]  = nrCifre;
		for (int j =0; j< nrCifre; j++){
			//da-mi cifra de pe pozirtia j
			cladiri[i, j]  = ( x / pow(nrCifre-1,10) ) % 10;
		}
	}

	// determinare cel mai inalt turn (cea mai mare cifra) 
	int maxTurn = 0;
	for(int i=0; i< n; i++){
		for(int j=; j<cladiri[i,9]; j++)
		  if (maxTurn < cladiri[i,j]) maxTurn = cladiri[i,j];

	}

	//cate cladiri au in componenta cun turn egal cu maxTurn ?
	int nrCladiriCuMaxTurn =0;
	for(int i=0; i< n; i++){
		for(int j=; j<cladiri[i,9]; j++){
			if (cladiri[i,j]) == maxTurn){
				nrCladiriCuMaxTurn ++;
				break;
			}
		}
	}

	for(int i=0; i< n; i++){
		for(int j=0; j<cladiri[i,9]/2; j++){
			if (cladiri[i,j] == cladiri[i, cladiri[i,9] - j])
		}
	}



}