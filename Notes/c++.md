
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

char c;
f >> c;						//de la pozitia ramasa (in fisier) citeste un caracter
f.close();					//inchisde fisierul f

f.eof();  					//returneza true daca am ajuns la finalul fisierului f

char c;
while (f.get(c)){				//citeste un caracter din f (in c) si returneaza 0 - EOF daca s-a ajuns la final de fisier
	cout << c;
}

ifstream f("test.txt");
char c;
while (!f.eof()){
	f >> c;
	cout << c;
}
# #include <cctype>

## int isdigit ( int c );
Check if character is decimal digit
## int isalpha ( int c );
Check if character is alphabetic
## int isblank ( int c );
Check if character is blank
## int isspace ( int c );
Check if character is a white-space (spatiu, tab, LF, enter)