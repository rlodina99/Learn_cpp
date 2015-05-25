
#Tipuri de date

#ASCII
0 ...254 - setul de caractere
`for (int i = 0; i < 255; ++i)
	{
		cout << i << ' ' << (char) i << "   ";
		if(i%8 == 0) cout << '\n';
	}
`
#ifstream

stream = flux de date


ifstream f("date.in");     //deschide fisierul date.in pentru citire - variabila f

ifstream f;					//declara o variabila f de tip input file stream
f.open("date.in");			//deschide fisierul date.in

int x;
f >> x;						//citeste in variabila x un nr. intreg din fisier

string nume;
f >> nume;					//citeste toate carcterelle de la poz curenta pana la primul spatiu

char c;
f >> c;						//de la pozitia ramasa (in fisier) citeste un caracter
f.close();					//inchisde fisierul f

f.eof();  					//returneza true daca am ajuns la finalul fisierului f

int f.peek();				//Returns the next character in the input sequence, without extracting it: 

char c;
while (f.get(c)){			//citeste un caracter din f (in c) si returneaza 0 - EOF daca s-a ajuns la final de fisier
	cout << c;
}

ifstream f("test.txt");
char c;
while (!f.eof()){
	f >> c;
	cout << c;
}

string linie;
getline(f, linie);			//citeste o linie din f in var. string linie


# #include <cctype>

## int isdigit ( int c );
Check if character is decimal digit
## int isalpha ( int c );
Check if character is alphabetic
## int isblank ( int c );
Check if character is blank
## int isspace ( int c ); 
Check if character is a white-space (spatiu, tab, LF, enter)

#std::string   
string s = "Amadeus merge la piata";
cout << s.length();		//returneaza nr. de caractere din s
cout << s[i];			//returneaza caracterul cu indexul i
if (s.empty()) 			//returneaza true daca s este gol

#find
int idx = s.find("merge"); 		//cauta sirul de caractere merge in s si returneaza poz de start
int idx = s.find("merge", 3)	//cauta sirul de caractere merge in s INCEPAND CU POZ 3 si returneaza poz de start
//returneaza constanta std::string::npos daca nu exista
if (idx == string::npos) cout << ""


convert string to int

string s = "1245";
int x = atoi(s.c_str());	//definita in <stdlib.h>


#Struct

Definire tip de data utilizator


struct Persoana			//definim tipul strct cu numele persoana
{
	string nume;
	int anulNasterii; 
}

Persoana elev;				//creem variabila elev de tip Persoana
elev.nume = "Pop Ionel";	//atribuire valoare la campul nume de la variabila el;ev
evel.anulNasterii = 1999;
cout << elev.nume << " " << elev.anulNasterii;

Persoana arr[10];			// vector de 10 elemente fiecare element este de tip Persoana

arr[0].Nume = "Ionica";
arr[0].anulNasterii = 1999;
arr[0].anulNasterii ++;
cout 
	<< arr[0].Nume			// numele primei persoane
	<< arr[0].anulNasterii; //


