#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P45.in");
    int x,s=0;
    f >> x;
    do{
        s = 0;
        while(x!=0){
            s=s+x%10;
            x=x/10;
        }
        x=s;
    }while(x>10);
    cout << x;

    return 0;
}