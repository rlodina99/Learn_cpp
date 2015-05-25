#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("defrag.in");
    ofstream g("defrag.out");

    int v,p,s,c;

    f >> v >> p >> s >> c;
    if(v==1){
        struct Pista{
            int clusteri;
        };
        Pista arr[s];

        for(int i=0;i<p;i++){
            arr[i].clusteri=0;
        }


        int pista,nrClusteri;
        for(int i=1;i<=c;i++){
            f >>  pista;
            f >>  nrClusteri;
            arr[pista].clusteri+=nrClusteri;
        }
        int faraClusteri=0;
        for(int i=1;i<=p;i++){
           if(arr[i].clusteri==0)
                faraClusteri++;
        }
        g << faraClusteri;
    }
    else{

        struct Pista{
            int clusteri[9];
        };
        Pista arr[s];

        for(int i=1;i<=p;i++){
            for(int j=1;j<=p*s;j++)
                arr[i].clusteri[j]=0;
        }

        int a=2,b=1,c=0,d=1;
        int pista,nrClusteri;
        for(int i=1;i<=c;i++){
            f >>  pista;
            f >>  nrClusteri;
            arr[pista].clusteri[nrClusteri]=nrClusteri;
        }

        int minim,maxim;
         for(int i=1;i<=p;i++){
            for(int j=1;j<=9;j++){
                if(arr[i].clusteri[j]!=0){
                    minim=arr[i].clusteri[j];
                    break;
                }
            }
            for(int j=9;j>0;j--){
                if(arr[i].clusteri[j]!=0){
                    maxim=arr[i].clusteri[j];
                    break;
                }
            }
            int numar=0;
            for(int j=minim;j<=maxim;j++){
                if(arr[i].clusteri[j]==0){
                    numar++;
                }
            }

        }

        g << a << ' ' << b << ' ' << c << ' ' << d;

    }



    return 0;
}
