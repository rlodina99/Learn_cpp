#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int i;
	ifstream f("data.in");
	f >> i;

	std::cout << "Mirabela=" << i;

	return 0;
}