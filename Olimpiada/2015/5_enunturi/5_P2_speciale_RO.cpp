#include <iostream>
#include <fstream>

using namespace std;

int main()
{


    ifstream f ("speciale.in");
    ofstream g ("speciale.out");

    int P,N,K,A,B,x,speciale,numarCifr,i,p,a;
  
    f >> P >> K >> N >> A >> B;

    a=N;
    x=0;
    numarCifr=0;
    speciale=0;
    if(P==1)
    {
        for(i=9; i>=10-K; i--){
            g << i;
        }

        
        
    }

    if(P==2)
    {
        
        while(a!=0)
        {
            
            speciale=speciale*10+numarCifr;
            numarCifr++;
            a=a/10;
        }

        if(N%10==numarCifr-1 || (N/10)%10==numarCifr-1)    //crescator
        {
            a=N;
            i=numarCifr-1;
            p=1;
            while(a)
            {
                if(a%10!=i)
                {
                    if(N/(p*10)*p+N%p==speciale) 
                        x=speciale;
                    break;
                }
                else
                {
                    i--;
                    p=p*10;
                    a=a/10;
                }
            }
            if(a==0)
                x=speciale;
        }

        
        if(x==0 && (N%10==11-numarCifr || (N/10%10==11-numarCifr)))//descrescator
        {
            a=N;
            i=11-numarCifr;
            p=1;
            while(a)
            {
                if(a%10!=i)
                {
                    if(N/(p*10)*p+N%p==speciale*8+numarCifr-1) 
                        x=speciale*8+numarCifr-1;
                    break;
                }
                else
                {
                    i++;
                    p=p*10;
                    a=a/10;
                }
            }
            if(a==0)
                x=speciale*8+numarCifr-1;
        }
        g << x;
        
    }
    if(P==3)
    {

    int numar1=0,numar2=0,numere=0;
      for(int i=1;i<9;i++){
            numar1=numar1*10+i;
            numar2=(numar1)*8+i;
            if(numar1>=A && numar1<=B){
                numere++;
            }
            if(numar2>=A && numar2<=B){
                numere++;
            }
      }

      g << numere;
        
    }
    return 0;
}
