#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main(){

	ifstream f("SubMures.in");

	int k,n,x;
	f >> k >> n;

	struct Insula{
		int lungime;			//lungimea insulei
		int varfuri[50];		//fiecare varf sin insula. Ex: 15 20 13 
		int coefPlat;			//dif dintre cel mai mare si cel mai mic varf
		int inaltimeMax;		//inaltimea maxima a insulei
	};

	Insula insule[n];		//insule[0]			 = continent start
							//insule[nrInsule-1]	 = continent end
	for (int i = 0; i < n; ++i)	{
		insule[i].lungime = 0;
		insule[i].coefPlat =0;
	}

	int nrInsule = -1;
	int varf, lungimeInsula;
	int startInsula = 1;

	for(int i=0;i<n;i++){
		f >> varf;

		if (varf == 0){
			startInsula = 1;
			continue;
		}

		if (startInsula) {
			nrInsule ++;
			startInsula = 0;
		}

		lungimeInsula = insule[nrInsule].lungime;
		insule[nrInsule].varfuri[lungimeInsula] = varf;
		lungimeInsula ++;
		insule[nrInsule].lungime = lungimeInsula;
		
	}

	//calculare coefPlat
	for (int i = 1; i < nrInsule; ++i)
	{
		int iMax = INT_MIN;
		int iMin = INT_MAX;

		for(int j=0;j<insule[i].lungime;j++){
			if(insule[i].varfuri[j]>iMax)
				iMax=insule[i].varfuri[j];
			if(insule[i].varfuri[j]<iMin)
				iMin=insule[i].varfuri[j];
		}
		insule[i].inaltimeMax = iMax;
		insule[i].coefPlat = iMax - iMin;
	}


	for (int i = 0; i <= nrInsule; ++i)
	{
		cout << "insula " << i << " lungime:"  << insule[i].lungime 
			 << ", coefPlat: " << insule[i].coefPlat 
			 << ", inaltimeMax : " << insule[i].inaltimeMax << " : " ;
		for(int j = 0; j < insule[i].lungime; j++){
			cout << insule[i].varfuri[j] << " ";
		}
		cout << "\n";
	}
	int minPlat=INT_MAX;
	int idxPlat;
	for (int i=1; i<nrInsule;++i){
		if(minPlat>insule[i].coefPlat){
			minPlat=insule[i].coefPlat;
			idxPlat = i;
		}
	}
	cout << "\nNr insule = " << nrInsule-1;

	cout << "\nInaltimea celei mai plate insule este = " << insule[idxPlat].inaltimeMax;
	cout << "\nNumerele de ordine ale insulelor cu înălţime minimă = ";
	for (int i=1; i<nrInsule;++i){
		if(minPlat==insule[i].coefPlat)
			cout << i << " ";
	}
	int lungimeMaxInsula=INT_MIN;
	for(int i=1;i<nrInsule;++i){
		if(lungimeMaxInsula<insule[i].lungime)
			lungimeMaxInsula=insule[i].lungime;
	}
	cout << "\nLungimea maxima= " << lungimeMaxInsula*k;
	cout << "\nInsulele cele mai lungi= ";
	for(int i=1;i<nrInsule;++i){
		if(lungimeMaxInsula==insule[i].lungime)
			cout << i << ' ';
	}
	return 0;
}