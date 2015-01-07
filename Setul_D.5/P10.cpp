#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("P10.in");

	int n,x,cif=0,imp=0,s=0,arit=0;
	f >> n;
	int arr[n];

	for (int i=1; i<=n; i++){
		f >> arr[i];
	}
    for (int i=0; i<=n; i++){
    	x=arr[i];
    	while(x!=0){
    		if(x%2!=0)
    			imp++;
    		cif++;
    		x=x/10;
    		
    	}
    if(imp==cif )
    	if (arr[i]>3){
    		if(arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%6!=0){
    			cout << arr[i] <<  ' ';
    			s+=arr[i];
    			arit++;
    		}

    	}
    	else
    		if(arr[i]%2!=0 && arr[i]%5!=0){
    			cout << arr[i] << ' ';
    			s+=arr[i];
    			arit++;
    		}

    cif=0;
   	imp=0;
	}
	cout << endl;
	cout << "Media aritmetica a ELM pime si alc numai din cifre impare este:    " << s/arit <<"      ";
	return 0;
}
