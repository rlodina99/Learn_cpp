#Verificare daca un numar este palindrom(daca numarul este egal cu oglinditul sau):
	
	
		int og=0,a,b;
		cin>>a;
		b=a;
		while(a!=0)
		{
			og=og*10+a%10;
			a=a/10;
		}
		if(og==b)
			cout<<"Numarul "<< b <<" este palindrom.";
		else
			cout<<"Numarul "<< b <<" nu este palindrom.";
		}


#Cel mai mic divizor comun a doua numere MET I
		
		
		int x,y,a,b;
		cin >>  x;
		cin >> y;
		a=x;
		b=y;
		while(x!=y){
			if(x>y)
				x=x-y;
			else
				y=y-x;
		}
		cout << "Cel mai mare divizor comun al numerelor "<< a <<" si "<< b <<" este: "<< x;
		}
#Cel mai mic divizor comun a doua numere MET II


		int r,a,b;
		cin >> a;
		cin >> b;
		r=a%b;
		while(r!=0){
			a=b;
			b=r;
			r=a%b;
		}
		cout << "Cel mai mare divizor comun al numerelor "<< a <<" si "<< b <<" este: "<< b;
		}

#Cel mai mare multiplu comun a doua numere


		int r,a,b,x,y;
		cin >> a;
		x=a;
		cin >> b;
		y=b;
		r=a%b;
		while(r!=0){
			a=b;
			b=r;
			r=a%b;
		}
		cout << "Cel mai mare multiplu comun a doua numere "<< x <<" si "<< y <<" este: "<< (x*y)/b;
		}

#Verificare daca un numar este prim:
		
		
			int d=2,ok=0,a,q;
			cin >> a;
			q=a;
			if(a<2)
				cout << "Numarul " << a << " nu este numar prim";
			else
				while((d<=(int)sqrt(a))&&(ok==0))
					if(a%d==0)
			   			ok=1;
			  		else
			   			d++;
			if(ok==0)
				cout << "Numarul "<< q <<" este numar prim";
			else
				cout << "Numarul "<< q <<" nu este numar prim";

#Verificare daca doua numere sunt prime intre ele:


		int x,y,a,b;
		cin>>x;				|
		cin>>y;				|			
		a=x;				|	
		b=y;				|  //#Cel mai mic divizor comun a doua numere MET I
		while(x!=y){		|
			if(x>y)			|
				x=x-y;		|	
			else 			|
				y=y-x;		|
		}					|
		if(x==1)
			cout<<"Numerele "<< a <<" si "<< b <<" sunt prime intre ele.";
		else
			cout<<"Numerele "<< a <<" si "<< b <<" nu sunt prime intre ele.";



#preluat din: http://forum.ubuntu.ro/viewtopic.php?id=9930


#Sortarea bulelor

		int e;		// nr. de elemente
		f >> e;
		int nr[e];	// vectorul
									
		for(int i =0; i< e; i++){		//citire continut vector
			f >> nr[i];
		}
		
		int isOk = 0;
		do{
			isOk = 1;
			for(int i=0; i< e-1; i++){
				if (nr[i] > nr[i+1]){
					int aux = nr[i];
					nr[i] = nr[i+1];
					nr[i+1] = aux;
					isOk = 0;
				}
			}

		}while (isOk != 1);

	 	cout << endl;
	 	for(int i=0;i<e;i++)
	 		cout << nr[i] << ' ';
