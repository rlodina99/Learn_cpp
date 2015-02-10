#include <iostream>
using namespace std;

int main(){
	for (int i = 0; i < 255; ++i)
	{
		cout << i << ' ' << (char) i << "   ";
		if(i%8 == 0) cout << '\n';
	}

	int A = 65;
	char C = A + 2;
	cout << "\n\n" << (char) (A + 2)	<< ",   C="  << C;
	
	return 0;
}