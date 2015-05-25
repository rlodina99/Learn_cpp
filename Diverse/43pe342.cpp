#include <iostream>
#include <fstream>
using namespace std;



int main(){
    ifstream f("43pe342.in");
    int n;
    f >> n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        f >> arr[i];
    }
    for(int i=0;i<n;i++){
        int c=arr[i]%10;
        while(arr[i]){
            c=arr[i]%10;
            arr[i]=arr[i]/10;
        }
        brr[i]=c;
    }
    
    int isOk = 0;
    do{
        isOk = 1;
        for(int i=0; i< n-1; i++){
            if (brr[i] > brr[i+1]){
                int aux = brr[i];
                brr[i] = brr[i+1];
                brr[i+1] = aux;
                isOk = 0;
            }
        }

    }while (isOk != 1);

    for (int i = 0; i < n; i++)
    {
        cout << brr[i];
    }
    return 0;
}
