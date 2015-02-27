#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream f("cool.in");

    int p,n,k;

    f >> p >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        f >> arr[i];
        cout << arr[i] << ' ';
    }
    int brr[k];
    for(int i=0;i<k;i++){
        brr[i]=arr[i];
    }

    int isOk = 0;
	do{
		isOk = 1;
		for(int i=0; i< k-1; i++){
			if (brr[i] > brr[i+1]){
				int aux = brr[i];
				brr[i] = brr[i+1];
				brr[i+1] = aux;
				isOk = 0;
			}
		}

	}while (isOk != 1);
    cout <<'\n';

    for(int i=0;i<k;i++){
        cout << brr[k] << ' ';
    }








    return 0;
}
