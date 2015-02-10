#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream f("7_P1_patrat.in");
    
    int n,m;
    f >> n >> m;

    struct Stea {
        int nr;
        int esteStralucitoare;
    };
    struct Stea mat[n][m];

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        f >> mat[i][j].nr;
        mat[i][j].esteStralucitoare = 0;
       // cout << mat[i][j].nr << ' ';
      }
    }
    int k=0,max=0;
    int nr;
    int nrSteleStralucitoare = 0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        max=0;
         nr = mat[i][j].nr;
          if (i>0 && nr > mat[i-1][j].nr)                 //sus
              max ++;                
          if (i>0 && j>0 && nr > mat[i-1][j-1].nr)      //stanga sus
              max ++;
          if (i>0 && j<m-1 && nr > mat[i-1][j+1].nr)     //dreapta sus
              max ++;
          if (i<n-1 && nr > mat[i+1][j].nr)              //jos
              max ++;
          if (i<n-1 && j>0 && nr > mat[i+1][j-1].nr)     //stanga jos
              max ++;
          if (i<n-1 && j<m-1 && nr > mat[i+1][j+1].nr)   //dreapta jos
              max ++;
          if (j>0 && nr > mat[i][j-1].nr)                //stanga
              max ++;
          if (j<m-1 && nr > mat[i][j+1].nr)              //dreapta
              max ++;

         
          if (i==0 || i == n-1)
              max += 3;
          if (j==0 || j==m-1) 
              max +=3;

          if (max == 8){
              mat[i][j].esteStralucitoare = 1;
              nrSteleStralucitoare ++;
            }
         }
      }
      
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cout << mat[i][j].nr;
          if (mat[i][j].esteStralucitoare) 
            cout << '*';
          else 
          cout << ' '; 
      }
      cout << '\n';
    }

    int l;
    int lMax = 0;
    int nrConstelatii = 0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if (mat[i][j].esteStralucitoare){
            for(int j1 = j+1; j1<m; j1++){
                if (mat[i][j1].esteStralucitoare){
                    l = j1 - j;
                    if (i + j < n){
                        if (mat[i+l][j].esteStralucitoare && mat[i+l][j1].esteStralucitoare){
                            nrConstelatii ++;
                            if (lMax<l) lMax =l;
                            cout << i << ',' << j << '-' << i+l << ',' << j1 << "   ";
                        }
                    }                  
                }
            }
        }      
      }
    }

    cout << "\nNr. stele stralucitoare = " << nrSteleStralucitoare << '\n';
    cout << "\nNr. constelatii  = " << nrConstelatii;
    cout << "\nLatura celei mai mare constelatii = " << lMax;

  
  return 0;
}