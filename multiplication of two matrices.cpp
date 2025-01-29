#include<iostream>
using namespace std;
int main(){
    int r , c;
    cout<<"enter number r:";
    cin>>r;
    cout<<"enter number c:";
    cin>>c;
    int arr[r][c];
   
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
     for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    int m,n;
    cout<<"enter number m:";
    cin>>m;
    cout<<"enter number n:";
    cin>>n;
      int brr[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>brr[i][j];
        }
        cout<<endl;
    }
     for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<brr[i][j];
        }
        cout<<endl;
    }
    int crr[r][n];
    if(c != m){
        cout<<"not multiplyed";
    }else{
    
    for(int i=0;i<r;i++){
        for(int j = 0;j<n;j++){
            crr[i][j] = 0;
            for(int k = 0;k<c;k++){
                crr[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    }
     for(int i = 0;i<r;i++){
        for(int j = 0;j<n;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}  