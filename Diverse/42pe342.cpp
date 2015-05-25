#include <iostream>
#include <fstream>
using namespace std;



int main(){
    ifstream f("42pe342.in");
    int n;
    f >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        f >> arr[i];
    }
    int nrzerouri=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            nrzerouri++;
    }
    
    while(nrzerouri){
        for(int i=0;i<n-1;i++){
            if(arr[i]==0){
                arr[i]=arr[i+1];
                arr[i+1]=0;
            }
        }
        nrzerouri--;
    }
    
    for(int i=0;i<n;i++){
        cout << arr[i] << ' ';
    }
    return 0;
}
