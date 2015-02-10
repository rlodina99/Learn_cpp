#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream f;
	f.open("reactivi.in");
	int nrReact;
	f >> nrReact;

	int rMin; 				// temp minima reactiv
	int rMax; 				// temp maxima reactiv

	struct Frigider{
		int tMin;
		int tMax;
	};

	Frigider arr[nrReact];
	int nrFrigidere = 0;
	int existaFigider;
	while(nrReact){
		f >> rMin >> rMax;

		existaFigider = 0;

		for(int i=0; i< nrFrigidere; i++){
			if (arr[i].tMin < rMin && arr[i].tMax > rMax){
				existaFigider =1;
				break;
			}
		}

		if (!existaFigider){
			arr[nrFrigidere].tMin = rMin;
			arr[nrFrigidere].tMax = rMax;
			nrFrigidere++;
		}
		nrReact --;
	}
	cout << '\n' << nrFrigidere;
	cout << "\n Varianta 2\n";

	f.close();
	f.open("reactivi.in");

	f >> nrReact;
	int arrMin[nrReact];	//temperaturile minime reactanti
	int arrMax[nrReact];	// temp maxime reactanti

	for (int i = 0; i < nrReact; ++i)
	{
		f >> arrMin[i];
		f >> arrMax[i];
	}
	nrFrigidere = nrReact;
	for (int i = 0; i < nrReact; ++i)
	{
		for(int j = 0; j< nrReact; j++){
			if (i != j){
				if (arrMax[i] >= arrMin[j] ){
					nrFrigidere--;
					break;
				}
			}
		}
	}

	cout << '\n' << nrFrigidere;
	return 0;
}