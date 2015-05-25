#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("drept.in");
    int p; //valoare 1 sau 2
    int n; //lungimea matricii
    int k; //pozitile bilelor
    int d; // lungimea diagonalei
    int m; // nr de intrebari
    f>>p;
    f>>n>>k>>d;
    if (p==1)
    {
        int n1=2*d-3;
        cout<<n1;
    }
    else
    {
        int mat[n][n];
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                mat[i][j]=0;
                cout<<mat[i][j]<<' ';
            }
            cout<<'\n';
        }
        struct Bile{
            int linia;
            int coloana;
        };
        Bile arr[k];
        for (int i=1;i<=k;i++){
            f>>arr[i].linia;
            f>>arr[i].coloana;
        }
        f>>m;
        for (int i=1;i<=m;i++)
        {
            int linieColt;
            int coloanaColt;
            f>>linieColt>>coloanaColt;
            mat[linieColt][coloanaColt]=9; //sus
            mat[linieColt+d][coloanaColt]=9; //jos
            mat[linieColt+d/2][coloanaColt-d/2]=9; //stanga
            mat[linieColt+d/2][coloanaColt+d/2]=9; //dreapta
            int x=d/2;
            for (int i=0;i<x/2;i++)
            {
               mat[linieColt+d/2-i][coloanaColt-d/2+1]
            }
             for (int i=x/2;i<x;i++)
            {
               mat[linieColt+d/2-i][coloanaColt-d/2+i]
            }
        }

    }
    return 0;
}
