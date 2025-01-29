#include<iostream>
using namespace std;
int main(){
    int r,c,a,sum=0;
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
        int a=arr[i][j];
        cout<<a<<" "; 
    }
    cout<<endl;
    }
      
    int l1=1,l2=3,r1=1,r2=3;
    int brr[r2][l2];
    for(int i=r1;i<=r2;i++){
        for(int i=l1;i<=l2;i++){
            sum+=brr[i][i];
        }
    }
    cout<<sum;
    }
