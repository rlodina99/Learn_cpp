#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("arc.in");
    ofstream g("arc.out");
    int v,n;
    f >> v >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        f >> arr[i];
    }
    if(v==1)
    {
        int secvente=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=arr[i+1])
                secvente++;
        }
        g << secvente;
    }
    else
    {

        int prima=0,lafel=0,zero;
        int esteBine=10000;
        while(esteBine>0){


            for(int i=0; i<n-2; i++)
            {

                lafel=0;
                if(arr[i]==arr[i+1] && arr[i]==arr[i+2])
                {
                    prima=i;
                    for(int j=i; j<n-1; j++)
                    {
                        if(arr[j]==arr[j+1])
                        {
                            arr[j]=0;
                            lafel++;
                        }
                        else
                            break;

                    }
                    arr[i+lafel]=0;
                    //



                }

                int isOk=0;
                    while(isOk==0){
                        isOk=1;
                        for(int j=0;j<n-1;j++){
                            if(arr[j]==0 && arr[j+1]!=0){
                                arr[j]=arr[j+1];
                                arr[j+1]=0;
                                isOk=0;
                            }

                        }
                    }



            }


        esteBine--;

        }

    }

        int numere=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=0)
                numere++;
        }
        g << numere << '\n';
         for(int i=0; i<n; i++)
        {
            if(arr[i]!=0)
                g << arr[i] << '\n';
        }




    return 0;
}
