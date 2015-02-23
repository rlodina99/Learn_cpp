/*
   identificare operanzi/operatori (+,-,*,/) din expresie

   string expr = "A8+ b12 - u3 + 3  - T23"
	//fiecare termen al expresiei trebuie pus intr-un element dintr-un sir

	string arr[100];
	arr[0] = 'A8';
	arr[1] = '+'
	arr[2] = 'b12'
	arr[3] = '-'
	arr[4] = 'u3'
	arr[5] = '+'
	arr[6] = '3'
	arr[7] = '-'
	arr[8] = 'T23'

	int lungimeExpresie = expr.lengtgh();
	char c = s[i]; 	//returneaza caracterul cu indexul i din s

*/

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){

	string arr[100];
	string expr = "A8 + b12 - u2563 + 399  - T23  ";
	int a=0;
	for (int i = 0; i < expr.length(); i++)
	{
		if (isspace(expr[i])) 		//spatiu, tab, enter, 
			continue;
		else if (expr[i]=='+' || expr[i]=='-' || expr[i]=='*' || expr[i]=='/'){
				a++;
				arr[a] +=expr[i];
				a++;			
		}
		else {
			arr[a] +=expr[i];				//concatenare caracter citit 
		}	
	}

	for(int j=0;j<=a;j++){
		cout << arr[j] << '\n';
	}




	return 0;
}