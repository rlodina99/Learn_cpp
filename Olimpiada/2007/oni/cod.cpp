#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("cod.in");
    
    int n;

    f >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        f >> arr[i];
        cout << arr[i] << ' ';
    }

    int x=0;
    while(x<n){
        for(int i=0; i<n ; i++){
            if((arr[x]==arr[i]) && (x!=i))
            {
                arr[x]=0;
                arr[i]=0;
                break;
            }
        }
        x++;
    }

    int isOk = 0;
    do{
        isOk = 1;
        for(int i=0; i< n-1; i++){
            if (arr[i] > arr[i+1]){
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                isOk = 0;
            }
        }

    }while (isOk != 1);

    cout << endl; 

    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            cout << arr[i];
    }
 
    return 0;
}