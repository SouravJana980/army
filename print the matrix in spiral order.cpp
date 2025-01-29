#include<iostream>
using namespace std;
int main(){
    int r,c;
     cout<<"enter number r:";
     cin>>r;
      cout<<"enter number c:";
      cin>>c;
      int toprow = 0;
      int lower_row = r-1;
      int Lcolum = 0;
      int Rcolum = c-1;
      int count = 0;
      int totalNL = r*c; 
    int arr[r][c];
    cout<<totalNL;
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        cin>>arr[i][j]; 
    }
    cout<<endl;
    }
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        cout<<arr[i][j]; 
    }
    cout<<endl;
    }
    while(count < totalNL){
      for(int i=Lcolum;i<=Rcolum;i++){
        cout<<arr[toprow][i]<<" ";
        count++;
      }
      toprow++;
      for(int j=toprow;j<=lower_row;j++){
        cout<<arr[j][Rcolum];
        count++;
      }
      Rcolum--;
      for(int k=Rcolum;k>=Lcolum;k--){
        cout<<arr[lower_row][k];
        count++;
      }
      lower_row--;
      for(int l=lower_row;l>=toprow;l--){
        cout<<arr[l][Lcolum];
        count++;
      }
      Lcolum++;

    }
}