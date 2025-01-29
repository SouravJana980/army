#include<iostream>
using namespace std;
int main(){
    int r,c;
   
    int max=0;
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
        int sum=0; 
    
      for(int j=0;j<c;j++){ 
        cout<<arr[i][j]<<" "; 
         sum+=arr[i][j];
    }
    
    cout<<sum;
    }
}