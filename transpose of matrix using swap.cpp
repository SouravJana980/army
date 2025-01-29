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
            cout<<arr[i][j];
        }
        cout<<endl;
    }
     
     for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
        
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
        
        cout<<endl;
    }
    
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
       
       
    }
     cout<<endl;
}
}