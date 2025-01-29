#include<iostream>
using namespace std;
int main(){
    int r,c;
     cout<<"enter number r:";
     cin>>r;
      cout<<"enter number c:";
      cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        cin>>arr[i][j]; 
    }
    cout<<endl;
    }
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        cout<<arr[i][j]<<" "; 
    }
    cout<<endl;
    }

    int brr[r][c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        cin>>brr[i][j]; 
    }
    cout<<endl;
    }
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        cout<<brr[i][j]<<" "; 
    }
    cout<<endl;
    }
    
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){ 
        brr[i][j] = arr[i][j]+brr[i][j];
        cout<<brr[i][j]<<" "; 
    }
    cout<<endl;
    }


}
