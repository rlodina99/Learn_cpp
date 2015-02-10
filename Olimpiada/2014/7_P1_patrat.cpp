#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream f("7_P1_patrat.in");
    
    int n,m;
    f >> n >> m;

    int mat[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        f >> mat[i][j];
        cout << mat[i][j] << ' ';
      }
      cout << endl;
    }
    cout << endl;
    int stele[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        stele[i][j]=0;
      }
    }

    cout << endl;
    int k=0,max=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          k=0;      
          if(j>0){                   // STANGA
            if(mat[i][j]>mat[i][j-1])
              k++;
          }
          else
            k++;

          if(j>0 && i>0){                   // STANGA sus DIAG
            if(mat[i][j]>mat[i-1][j-1])
              k++;
          }
          else  
            k++;

          // DREAPTA
          if(j<m-1){
            if(mat[i][j]>mat[i][j+1])
              k++;
          }
          else
            k++;

          // DREAPTA sus DIAG
          if(j<m-1 && i>0){
            if(mat[i][j]>mat[i-1][j+1])
              k++;
          }
          else
            k++;

          // SUS
          if(i>0){
            if(mat[i][j]>mat[i-1][j])
              k++;
          }
          else
            k++;

          // JOS
          if(i<n-1){ 
             if(mat[i][j]>mat[i+1][j])
              k++;
          }
          else
            k++; 

          // JOS stanga DIAG
          if(i<n-1 && j>0){ 
             if(mat[i][j]>mat[i+1][j-1])
              k++;
          }
          else
            k++; 

          // JOS dreapta DIAG
          if(i<n-1 && j<m-1){ 
             if(mat[i][j]>mat[i+1][j+1])
              k++;
          }
          else
            k++; 
          
          if(k==8){
            max++;
            stele[i][j]=mat[i][j];
          }
      }
      
    }
    cout <<"\nNr. de stele stralucitoare="  << max ;
     int l;
     int lmax = 0;
    int constelatii=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if (stele[i][j] != 0 ){                 //coltul stanga sus al posibilei constelatii
          for(int j1 = j+1; j1<m; j1++){
              if (stele[i][j1] != 0){           //coltul dreaprta sus al posibilei contelatii
                  l = j1-j;
                  if (i+l < n && stele[i+l][j] != 0 && stele[i+l][j1] != 0){
                    constelatii ++;
                    if (lmax < l) lmax = l;
                  }
              }
          }
        }
      }

    }
    cout << "\n constelatii =" << constelatii;
    cout << "\n latura celei mai mari constelatii " << lmax+1;


  return 0;

}