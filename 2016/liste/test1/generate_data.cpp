/**
 * genereaza un fisier data.in care contine:
 *   - prima linie un antet
 *   - pe restul liniilor cate un articol
 *   - separator campuri caracterul \t (TAB)
 */


#define NR_RECORDS 10



#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>    /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int getRndInt(int min, int max){
	 return min + (rand() % (int)(max - min + 1));
}

//generare nume pers
const char* LAST_NAME[] = {"Albina", "Barbos", "Condrea", "Durus", "Enache", "Florescu", "Lodina", "Ionescu", "Miclaus", "Popescu", "Vasilache"};
#define NR_LAST_NAME (sizeof (LAST_NAME) / sizeof (const char *))

const char* getRndLastName(){
		return LAST_NAME[getRndInt(0, NR_LAST_NAME - 1)];
}

//generare prenume
const char* FIRTS_NAME[] = {"Ana", "Bogdan", "Corina", "Dan", "Elene", "Firuta", "Cornel", "Sebi", "Mircea", "Monica", "Vasile"};
#define NR_FIRTS_NAME (sizeof (FIRTS_NAME) / sizeof (const char *))

const char* getRndFirstName(){
		return FIRTS_NAME[getRndInt(0, NR_FIRTS_NAME - 1)];
}

int main(int argc, char** argv){
	ofstream f("data.in");

	//testez sa vad daca fisierul a putut fi creat
	if (f.fail()) {
				//afisez eroarea (cerr - este tot un fel de std::cout)
        std::cerr << "open failure as expected: " << strerror(errno) << '\n';
        return 0;
  }

  /* initialize random seed: */
  srand (time(NULL));
  f << "Nume\tPrenume\tMate\tInfo\tRomana\n";
  for(int i=0; i<NR_RECORDS; i++){
  	f << getRndLastName()  
			<< '\t' << getRndFirstName()
		  << '\t' << getRndInt(2,10)
			<< '\t' << getRndInt(2,10)
			<< '\t' << getRndInt(2,10)
			<< '\n';
  }
	return 0;
}
