#include <iostream>
using namespace std;


void afisare(const char nume[]){
	cout << nume << '\n';
}

void afisare1(const char* nume){
	cout << nume<< '\n';
}

void afisare2(const char** nume_copii, int len){
	for(int i=0; i<len;i++){
		cout << nume_copii[i] << '\n';
	}
}

int main(int argc,  char** argv){

	afisare("ionel-1");
	afisare1("ionel-2");

	const char* copii[] = {
		"Unu", "doi"
	};

	afisare2(copii,2);

	cout << "\nNr params:" << argc << '\n';

	for(int i =0; i< argc; i++){
		cout << argv[i] << '\n';
	}

}