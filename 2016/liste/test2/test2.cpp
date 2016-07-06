#include <iostream>

using namespace std;

struct Elev{
	char nume[20];
	double inaltime;

	Elev* urmatorul;
};

void afisare(Elev* e){
	while(e != NULL) {
			cout << e->nume << '\n';
			e = e->urmatorul;
	}
}

int main(){
	const char* numeCopii[] = { "Unu", "Doi", "trei"};
	const double inaltimeCopii[] = {1.17, 1.67, 1.89};

	Elev* start = NULL;
	Elev* precedent = NULL;
	for(int i=0; i<3; i++){
			
			Elev* e = (Elev*) malloc(sizeof(Elev));
			strcpy(e->nume , numeCopii[i]);
			e->inaltime = inaltimeCopii[i]; 
			e->urmatorul = NULL;
			if (start == NULL)   start = e;		

			if (precedent != NULL) {
				precedent->urmatorul = e;
			}
			
			precedent = e;
			

	}
	
	afisare(start);
	
}