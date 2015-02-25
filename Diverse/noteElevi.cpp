#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main(){

	ifstream f("noteElevi.in");

	struct Elev{
		string nume;
		string prenume;
		int note[5];
		double media;
	};

	int n;				// nr de elevi
	f >> n;

	Elev clasa[30];
	double mediaClasei=0;
	int mediaMax=INT_MIN, 
		idxMax;					//index-ul elevului cu media maxima
	int mediaMin=INT_MAX,
		idxMin;

	string p;
	int nota;
	for (int i = 0; i < n; i++)	{
		int faraReligie=0;
		f >> clasa[i].nume;
		f >> clasa[i].prenume;
		clasa[i].media=0;
		for(int j=0;j<5;j++){
			f >> nota;
			clasa[i].note[j] = nota;
			if(nota!=0)
				clasa[i].media+=nota;
			else
				faraReligie=1;
		}	
		
		clasa[i].media=clasa[i].media/(5 - faraReligie);

		if(clasa[i].media>mediaMax){
			mediaMax=clasa[i].media;
			idxMax=i;
		}
		if(clasa[i].media<mediaMin){
			mediaMin=clasa[i].media;
			idxMin=i;
		}
		mediaClasei+=clasa[i].media;
	}

	for(int i=0;i<n; i++){
		cout << clasa[i].nume << ' ' << clasa[i].prenume << ' ';
		for(int j=0;j<5;j++){
			cout << clasa[i].note[j] << ' ';
		}
		cout << '\n';
	}
	cout << "\nmedia clasei= " << mediaClasei/n;
	cout << "\nCel mai bun elev " << clasa[idxMax].nume << ' ' << clasa[idxMax].prenume 
		 << ' ';
	for(int i=0;i<5;i++){
		cout << clasa[idxMax].note[i] << ' ';
	}
	cout << "Media " <<  clasa[idxMax].media;
	cout << "\nCel mai slab elev " << clasa[idxMin].nume << ' ' << clasa[idxMin].prenume 
		 << ' ';
	for(int i=0;i<5;i++){
		cout << clasa[idxMin].note[i] << ' ';
	}
	cout << "Media " <<  clasa[idxMin].media;

	// double matematica=0, romana=0, religie=0, fizica=0, chimie=0;
	// int copiiLaReligie =0;
	// for(int i=0;i<n;i++){
	// 	matematica+=clasa[i].note[0];
	// 	romana+=clasa[i].note[1];
	// 	if(clasa[i].note[2]!=0){
	// 		religie+=clasa[i].note[2];
	// 		copiiLaReligie ++;
	// 	}
	// 	fizica+=clasa[i].note[3];
	// 	chimie+=clasa[i].note[4];
	// }
	// matematica=matematica/n;
	// romana=romana/n;
	// religie=religie/copiiLaReligie;
	// fizica=fizica/n;
	// chimie=chimie/n;
	// int medieMaterieMax=INT_MIN;
	// if(medieMaterieMax<matematica)
	// 	medieMaterieMax=matematica;
	// if(medieMaterieMax<romana)
	// 	medieMaterieMax=romana;
	// if(medieMaterieMax<religie)
	// 	medieMaterieMax=religie;
	// if(medieMaterieMax<fizica)
	// 	medieMaterieMax=fizica;
	// if(medieMaterieMax<chimie)
	// 	medieMaterieMax=chimie;

	// if(medieMaterieMax==matematica)
	// 	cout << matematica;
	// if(medieMaterieMax==romana)
	// 	cout << romana;
	// if(medieMaterieMax==religie)
	// 	cout << religie;
	// if(medieMaterieMax==fizica)
	// 	cout << fizica;
	// if(medieMaterieMax==chimie)
	// 	cout << chimie;
	struct Materie{
		string nume;
		double media;
	};
	Materie materii[5];
	materii[0].nume = "matematica";
	materii[1].nume = "romana";
	materii[2].nume = "religie";
	materii[3].nume = "fizica";
	materii[4].nume = "chimie";
	
	int noteLaReligie;
	for(int i=0; i<n; i++){
		materii[i].media =0;
		noteLaReligie = 0;
		for(int j =0; j<5; j++){
			if (clasa[i].note[j] != 0 && j == 2 /* religie */){				
				noteLaReligie ++;
			}
			else {
				materii[i].media += clasa[i].note[j];
			}
		}
		if (i == 2) //religie
			materii[i].media = materii[i].media / noteLaReligie;
		else 
			materii[i].media = materii[i].media / 5;
	}
	int isOk = 1;
	Materie aux;
	do{
		isOk = 1;
		for (int i = 0; i < 5-1; i++){
			if (materii[i].media < materii[i+1].media){
				aux = materii[i];
				materii[i]  = materii[i+1];
				materii[i+1]  = aux;
				isOk = 0;
			}
		}
	}while(isOk != 1);

	cout << "\nMateria la care elevii sunt buni este " << materii[4].nume << " media: " << materii[4].media; 
	cout << "\nMateria la care elevii sunt slabi este  " << materii[0].nume << " media: " << materii[0].media; 

	return 0;
}