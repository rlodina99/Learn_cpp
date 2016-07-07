#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Elev
{
    char nume[20];
    char prenume[20];
    int mate;
    int info;
    int romana;
    int medie;

    Elev* urmatorul;
};

void afisare(Elev* e)
{
    while(e != NULL)
    {
        cout << e->nume << ' ' <<  e->prenume << ' ' <<  e->mate << ' ' <<
             e->info << ' ' << e->romana << " Media: " << e->medie << '\n';
        e = e->urmatorul;
    }
}


int main()
{

    ifstream f("data.in");
    ofstream g("data.out");

    if (f.fail())
    {
        //afisez eroarea (cerr - este tot un fel de std::cout)
        std::cerr << "open failure as expected: " << strerror(errno) << '\n';
        return 0;
    }

    Elev* start = NULL;
    Elev* precedent = NULL;
    char numeTest[20];

    while(f >> numeTest)
    {
        char prenume1[20];
        int mate1;
        int info1;
        int romana1;
        f >> prenume1 >> mate1 >> info1 >> romana1;


        Elev* e = (Elev*) malloc(sizeof(Elev));
        strcpy(e->nume , numeTest);
        strcpy(e->prenume , prenume1);
        e->mate = mate1;
        e->info = info1;
        e->romana = romana1;
        e->medie = (mate1+info1+romana1)/3;
        e->urmatorul = NULL;

        if (start == NULL)   start = e;

        if (precedent != NULL)
        {
            precedent->urmatorul = e;
        }

        precedent = e;

    }



    int ok=1;
    do
     {e=start;
      ok=1;
      while(e->urmatorul)
             {if(e->medie < e->urmatorul->medie)
                        {int aux=e->medie;
                        e->medie=e->urmatorul->medie;
                        e->urmatorul->medie=aux;
                        ok=0;
                        }
              e=e->urmatorul;}
      }
    while(ok==0);



    afisare(start);

}
