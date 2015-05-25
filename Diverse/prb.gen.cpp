#include <fstream>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <chrono>
\	
using namespace std;

#define MAX_NR 100000

int main (){
	 srand(time(0));
	 ofstream f("prb.in");
	 long double startTime = time(0);

	 f << MAX_NR << '\n';
	 for(int i=1;i<MAX_NR;i++){
	 	f << rand() % 10000 << ' ';
	 }

	 cout << "Generat in " << time(0)  - startTime;
	return 0;
}