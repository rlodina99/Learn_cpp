#include <iostream>
#include <fstream>

using namespace std;
//sortare prin metoda rapida de sortare
int  main()
{
    ifstream f("prb.in");
    int n;
    f >> n;
    int aux,a[n];
    
    for(int i=0; i<n; i++)
    {
        f >> a[i];
    }

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if (a[j]<a[i])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }

    

    for(int i=0; i<n; i++)
        cout << a[i] <<" ";

    cout<<endl;
    return 0;
}