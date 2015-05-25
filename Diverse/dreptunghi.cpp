#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("dreptunghi.in");
    int n;
    f >> n;

    struct Dreptunghi{
        int lungime;
        int latime;
    };

    Dreptunghi arr[n];

    for(int i=0;i<n;i++){
        f >> arr[i].lungime;
        f >> arr[i].latime;
    }

    for(int i=0;i<n;i++){
        cout << arr[i].lungime << ' ' << arr[i].latime << '\n';
    }

    int brr[n];

    int isOk=0;
    while(isOk==0){
        isOk=1;
        for(int i=0;i<n-1;i++){
            if(arr[i].lungime>arr[i+1].lungime){
                Dreptunghi aux=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=aux;
                isOk=0;
            }
        }
    }
    cout << '\n';
    for(int i=0;i<n;i++){
        cout << arr[i].lungime << ' ' << arr[i].latime << '\n';
    }

    int rez = 1;
    Dreptunghi aux = arr[0]; ///indexul ultimului dreptunghi procesat
    for(int i=1; i<n; i++){
        if (aux.latime < arr[i].latime && aux.lungime < arr[i].lungime){
            rez ++;
            aux=arr[i];
            cout << arr[i].lungime << " " << arr[i].latime << ", ";
        }
    }

    cout << "nr. de drept" << rez;

    return 0;
}
