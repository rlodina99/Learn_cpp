#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
	ifstream f("data.in");
	string arr[100];
	int i=0;
	char c;
	while (f.get(c)){
		if (isspace(c)) 		//spatiu, tab, enter, 
			continue;
		else if (c=='+' || c=='-' || c=='*' || c=='/'){
				i++;
				arr[i] +=c;
				i++;			
		}
		else {
			arr[i] +=c;				//concatenare caracter citit 
		}		
	}

	for(int j=0;j<=i;j++){
		cout << arr[j] << '\n';
	}

	return 0;
}

