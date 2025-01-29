#include<iostream>
using namespace std;
int main(){
    int r,c;
     cout<<"enter number r:";
     cin>>r;
      cout<<"enter number c:";
      cin>>c;
    
    int arr[r][c];
   int max =0;
    int tmax = 0;
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        cin>>arr[i][j]; 
    }
    cout<<endl;
    }
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        if(max<arr[i][j]){
            tmax = max;
            max=arr[i][j];
        }
    }
    }
    cout<<tmax; 
}