#include <iostream>
#include <fstream>

using namespace std;

    //ifstream f("arc.in");
    ifstream f ("C:\\Eval_OJI_2014_IX\\probleme\\arc\\teste\\1-arc.in");
    ofstream g ("arc.out");

int main()
{
    
    int v;           //nr cerintei
    int n;            //nr de bile
    f>>v;
    f>>n;

    
    int arr[n];                 //sirul de bile
    int lungimeSecventa=0;
    int inceputSecventa=0;            
    int maxim=0;                   //lungimea maxima a unei secvente

    if(v==1)
    {
        for(int i=0;i<n;i++){
            f >> arr[i];
         }
        int secvente=1;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] != arr[i+1])
                secvente++;
        }
        g << secvente;
    }
    else{
        for(int i=0;i<n;i++){
            f >> arr[i];
        }
        
                int c=100;
                while(c){
                    
                    maxim=0;
                    inceputSecventa=0;
                    for(int i=0;i<n-2;i++){
                        lungimeSecventa=0;
                        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2] && arr[i]!=0){
                            for(int j=i;j<n-1;j++){
                                if(arr[j]==arr[j+1])
                                    lungimeSecventa++;
                                else
                                    break;
                            }
                        }
                        if(maxim<lungimeSecventa){
                            maxim=lungimeSecventa+1;
                            inceputSecventa=i;            
                        }
                    }
        
        
                    int a=inceputSecventa;
                    while(maxim!=0){
                        arr[a]=0;
                        a++;
                        maxim--;
                    }
                    
                    int isOk=0;
                    while(isOk==0){
                         isOk=1;
                        for(int i=0;i<n-1;i++){
                             if(arr[i]==0 && arr[i+1]!=0){
                                 arr[i]=arr[i+1];
                                 arr[i+1]=0;
                                 isOk=0;
                            }
        
                         }
                    }
        
                    
                    int x=inceputSecventa;
                   
                    int m;
                    while(1){
                        if(arr[x+1]==arr[x] && arr[x]==arr[x-1]){
                              m=inceputSecventa;
                                 for(int i=x-1;i>=0;i--){
                                        if(arr[i]==arr[x]){
                                            inceputSecventa=i;
                                            arr[i]=0;
                                        }
                                        else
                                            break;
                                    }
                                    for(int i=x+1;i<n;i++){
                                        if(arr[i]==arr[x]){
                                            arr[i]=0;
                                        }
                                        else
                                            break;
                                    }
                        
                                    arr[x]=0;
                        
                                    int isOk=0;
                                    while(isOk==0){
                                         isOk=1;
                                        for(int i=0;i<n-1;i++){
                                             if(arr[i]==0 && arr[i+1]!=0){
                                                 arr[i]=arr[i+1];
                                                 arr[i+1]=0;
                                                 isOk=0;
                                            }
                        
                                         }
                                    }
                        
                                    if(m==inceputSecventa)
                                        break;
                                    x=inceputSecventa-1;
                                }
                            else
                                break;
                        
                    }
        
                    c--;
                }
        
                
                int nrElem=0;
                for(int i=0;i<n;i++){
                    if(arr[i]!=0)
                        nrElem++;
                }
                g << nrElem << '\n';
                for(int i=0;i<n;i++){
                    if(arr[i]!=0)
                        g << arr[i] << ' ';
                }
            }
        
        



    return 0;
}
