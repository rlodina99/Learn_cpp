#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("formula3.in");

	string expr;
	getline(f, expr);		//citim expresia
	cout << expr << '\n';

	string linie;
	while(!f.eof()){
		getline(f, linie);
		cout << linie << '\n';

		int idx = linie.find("z=");
		if (idx == string::npos){
			cout << "Nu am gasit = ";
		}
		else {
			cout << "= este pe pozitia " << idx;
		} 
		cout << '\n';
	}

	return 0;
}