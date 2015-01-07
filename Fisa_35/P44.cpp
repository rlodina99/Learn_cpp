#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P44.in");
    
    int x,x2,ok2,r2,x1,ok1,r1;
    f >> x;

    // calc primul nr prim mai mare ca x
    x2=x;
    ok2=0;
    while (ok2!=2){
        ok2=0;
        r2=1;
        x2++;
        while(r2<=x2){
            if(x2%r2==0)
                ok2++;
            r2++;
        }
    }

    // calc primul nr prim mai mic ca x
    x1=x;
    ok1=0;
     while (ok1!=2){
        ok1=0;
        r1=1;
        x1--;
        while(r1<=x1){
            if(x1%r1==0)
                ok1++;
            r1++;
        }
    }
    
    if (x-x1==x2-x)
        cout << x1 << ' ' << x2;
    else{
        if(x-x1>x2-x)
            cout << x2;
        else
            cout << x1; 
    }   

    return 0;
}