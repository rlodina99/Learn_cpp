#include <iostream>
#include <string.h>

using namespace std;

char* crypt(const char* inputBuf, const char* password){
		int len = strlen(inputBuf);// + strlen(password) + 1;
		
		char buf[len+1];

		 strcpy(buf, password);
		 strcat(buf, "\n");
		 strcat(buf, inputBuf);
		cout << buf;
	return NULL	;
}  

int main(int argc,  char** argv){

	char inputBuf[] = "Amadeus merge la piata";
	cout << "input data=" << inputBuf <<'\n';
	 crypt(inputBuf, "lolo");
	


}