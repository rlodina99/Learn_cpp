#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream file("stampile.in");
    
    int n,n1,x,x1,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,u,q,a,b,c,d,e,f,g,h,i,m=0;
    file >> n;
    n1=n;
    cout << "Numerele care au folosit exact două ştampile sunt: ";
    while(n){
    	file >> x;
    	x1=x;
    	q=0;
    	a=0;
    	b=0;
    	c=0;
    	d=0;
    	e=0;
    	f=0;
    	g=0;
    	h=0;
    	i=0;
    	while(x1){
    		u=x1%10;
    		if(u==0){
    			a0++;
    			q++;
    		}
    		if(u==1){
    			a1++;
    			a++;
    		}
    		if(u==2){
    			a2++;
    			b++;
    		}
    		if(u==3){
    			a3++;
    			c++;
    		}
    		if(u==4){
    			a4++;
    			d++;
    		}
    		if(u==5){
    			a5++;
    			e++;
    		}
    		if(u==6){
    			a6++;
    			f++;
    		}
    		if(u==7){
    			a7++;
    			g++;
    		}
    		if(u==8){
    			a8++;
    			h++;
    		}
    		if(u==9){
    			a9++;
    			i++;
    		}
    		x1=x1/10;
    	}

  
    	if(a==2 && (b==2 || c==2 || d==2 || e==2 || f==2 || g==2 || h==2 || i==2))
    		cout << x << ' ';
    	if(b==2 && (c==2 || d==2 || e==2 || f==2 || g==2 || h==2 || i==2))
    		cout << x << ' ';
    	if(c==2 && ( d==2 || e==2 || f==2 || g==2 || h==2 || i==2))
    		cout << x << ' ';
    	if(d==2 && ( e==2 || f==2 || g==2 || h==2 || i==2))
    		cout << x << ' ';
    	if(e==2 && (f==2 || g==2 || h==2 || i==2))
    		cout << x << ' ';
    	if(f==2 && ( g==2 || h==2 || i==2))
    		cout << x << ' ';
    	if(g==2 && ( h==2 || i==2))
    		cout << x << ' ';
    	if(h==2 && i==2)
    		cout << x << ' ';
    	
    	n--;
    }
  	int min=99999;
  	if(a0<min)
  		min=a0;
  	if(a1<min)
  		min=a1;
  	if(a2<min)
  		min=a2;
  	if(a3<min)
  		min=a3;
  	if(a4<min)
  		min=a4;
  	if(a5<min)
  		min=a5;
  	if(a6<min)
  		min=a6;
  	if(a7<min)
  		min=a7;
  	if(a8<min)
  		min=a8;
  	if(a9<min)
  		min=a9;
  	

  	if(a0==min)
  		cout << endl << "Cifra cea mai putin folosita este: 0 si a fost folosita de " << a0 << " ori!";
  	if(a1==min)
  		cout << endl << "Cifra cea mai putin folosita este: 1 si a fost folosita de " << a1 << " ori!";
  	if(a2==min)
  		cout << endl << "Cifra cea mai putin folosita este: 2 si a fost folosita de " << a2 << " ori!";
  	if(a3==min)
  		cout << endl << "Cifra cea mai putin folosita este: 3 si a fost folosita de " << a3 << " ori!";
  	if(a4==min)
  		cout << endl << "Cifra cea mai putin folosita este: 4 si a fost folosita de " << a4 << " ori!";
  	if(a5==min)
  		cout << endl << "Cifra cea mai putin folosita este: 5 si a fost folosita de " << a5 << " ori!";
  	if(a6==min)
  		cout << endl << "Cifra cea mai putin folosita este: 6 si a fost folosita de " << a6 << " ori!";
  	if(a7==min)
  		cout << endl << "Cifra cea mai putin folosita este: 7 si a fost folosita de " << a7 << " ori!";
  	if(a8==min)
  		cout << endl << "Cifra cea mai putin folosita este: 8 si a fost folosita de " << a8 << " ori!";
  	if(a9==min)
  		cout << endl << "Cifra cea mai putin folosita este: 9 si a fost folosita de " << a9 << " ori!";

  	int arr[10];

  	arr[0]=a0;
  	arr[1]=a1;
  	arr[2]=a2;
  	arr[3]=a3;
  	arr[4]=a4;
  	arr[5]=a5;
  	arr[6]=a6;
  	arr[7]=a7;
  	arr[8]=a8;
  	arr[9]=a9;

  	cout << endl;

  	int ok=1;

  	while(ok==1){
  		ok=0;
	  	for(int i=0;i<9;i++){
	  		if(arr[i]<arr[i+1]){
	  			int aux=arr[i];
	  			arr[i]=arr[i+1];
	  			arr[i+1]=aux;
	  			ok=1;
	  		}
	  	}
	}

	for(int i=0;i<10;i++){
		cout << arr[i] << " ";
	}

	cout << "\n Varianta B: ";
	file.close();
	file.open("stampile.in");

	//structura pentru o stampila
	struct Stamp{
		int cifra;			//0 ...9
		int folosita;		//de cate ori a fost folosita
	};

	struct Stamp stampile[10];
	for (int i = 0; i < 10; ++i)
	{
		stampile[i].cifra = i;
		stampile[i].folosita = 0;
	}
 
	file >> n;					// nr de numere de casa
	int nr;						//nr de casa
	int ch; 					//cifra unui numar
	while(n){
		file >> nr;				//nr de casa actual
		cout << nr << " ";	
		while(nr){				//luam cifra cu cifra
			ch = nr%10;
			stampile[ch].folosita++;
			nr = nr/10;
		}
		n--;
	}
	

	int esteSortat = 0;
	int _a, _b;
	do{							//sortam stampilele descrescator dupa folosinta
		esteSortat = 1;
		for (int i = 0; i < 9; ++i)
		{
			if (stampile[i].folosita < stampile[i+1].folosita){

				_a = stampile[i+1].cifra;
				_b = stampile[i+1].folosita;

				stampile[i+1].cifra = stampile[i].cifra;
				stampile[i+1].folosita = stampile[i].folosita;

				stampile[i].cifra = _a;
				stampile[i].folosita = _b;

				esteSortat = 0;
			}
		}
	} while(esteSortat == 0);

	int v = stampile[9].folosita;
	cout << "\nStampilele cele mai putin folosite (de " << v << " ori) sunt: " << stampile[9].cifra;
	i = 8;
	while(1){
		if (stampile[i].folosita != v){
			break;
		}
		cout << ' '<< stampile[i].cifra;
		i--;
	}

	cout << "\nStampilele ordonate dupa uzura: ";
	for (int i = 0; i < 10; ++i)
	{
		cout << stampile[i].cifra << " (" << stampile[i].folosita << "), ";
	}


  return 0;
}