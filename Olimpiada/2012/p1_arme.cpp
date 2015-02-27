#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream f("p1_arme.in");
        int n,m,aux;
        f >> n >> m;
        if(n>m)
            aux=n;
        else
            aux=m;

        int arr[aux];
        int brr[aux];

        for(int i=0;i<aux;i++){
            arr[i]=0;
        }

        for(int i=0;i<aux;i++){
            brr[i]=0;
        }

        for(int i=0;i<n;i++){
            f >> arr[i];
        }
        for(int i=0;i<m;i++){
            f >> brr[i];
        }

        int sumaPuteri=0;
        for(int i=0;i<aux;i++){
            if(arr[i]>brr[i])
                sumaPuteri+=arr[i];
            else
                sumaPuteri+=brr[i];
        }
        cout << sumaPuteri;
    return 0;
}
