#include <iostream>
#include <fstream>

using namespace std;

    ifstream f("arc.in");
    //ifstream f ("C:\\Eval_OJI_2014_IX\\probleme\\arc\\teste\\5-arc.in");
    ofstream g ("arc.out");

int main()
{
 
    int v;           		//nr cerintei
    int n;            		//nr de bile
    f>>v;
    f>>n;

    int arr[n];     
    for(int i =0; i< n; i++){
    	f >> arr[i];
    }

    int auxVal = arr[0];
    int auxNr = 1;

    if (v == 1){
    	for(int i=1; i<n; i++ ){
    		if (auxVal != arr[i]) {
    			auxNr ++;
    			auxVal = arr[i];
    		}
    	}

    	g << auxNr;
    }
    else
    {
    	int idx = 0; 					//index start secventa
    	int val = 0;					//valoare (nr) bila  din secvanta
    	int nr = 0;						//cate bile sunt in secventa

		int idxMax = 0; 				//index start secventa maxima
    	int nrMax = 0;					//cate bile sunt in secventa maxima

    	int k = 1;						//de unde sa inceap cautarea secventei maxime

	    while(1){
						
			idx = idxMax = k;
			val =  arr[k];
			nr  = nrMax = 1;


	    	//caut secventa maxima incepand cu idx
	    	for(int i = k; i<n; i++){
	    		if (arr[i] == 0 ) continue;		//bila eliminata

		    	if (val == arr[i]){
		    		nr ++;
		    	}
		    	else {
		    		if (nr > nrMax){
		    			nrMax = nr;
		    			idxMax = idx;
		    		}

		    		idx = i;
		    		val = arr[i];
		    		nr = 1;
		    	}
		    }

		    if (nrMax <=2){			//nu am gasit nici o secventa > de 3 bile
		    	
		    	int nrRamase = 0;	//cate bile au ramas
		    	for(int i = 0; i<n; i++){
		    		if (arr[i] > 0) 
		    			nrRamase ++; 
		    	}
		    	g << nrRamase << '\n';

		    	for(int i = 0; i<n; i++){
		    		if (arr[i] > 0) 
		    			g << arr[i] << '\n'; 
		    	}
		    }
		    else {
		    	//elimin din sir (le pun pe 0) nrMax bile inceand cu idxMax
		    	int j = idxMax;
		    	while(nrMax){
		    		if (arr[j] != 0) {
		    			arr[j] = 0;
		    			nrMax --;
		    		}
		    		j++;
		   		}   
		   		for(int i = 0; i<n; i++) 
		   			cout << arr[i] << " ";

		   		//verific daca dupa eliminare in zona in care am eliminat s-a great o noua grupare de minim 3 bile
		   		//pt. asta mut k inapoi pe inceput secventa identica cu arr[idxMax-1] 
		   		j = idxMax-1;

		   		if (j <0) continue; 	//am eliminat pana inceput 

		   		val = arr[j];
		   		nr = 1;	
		   		while(j<0){				// mergem inspre inceput pana gasim inceputul unei secvente 
			   		if (arr[j] != 0){
			   			if (val != arr[j])			   				
			   				break;
		   			}
		   			j--;
		   		}
		   		if (j>0) k = j; //pornim cautarea urmatoarei secvente din vecinatatea elimanarii de mai sus 


		    }
	    }

    }

    return 0;
}