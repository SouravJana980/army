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
    int maxcount = 0;
    int maxindx = 0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int i=0;i<c;i++){
            if(arr[i][i]==1){
                count++;
            }
            if(maxcount<count){
                maxcount=count;
                maxindx=i;
            }
            cout<<endl;
        }
    }
     cout<<maxcount<<endl;
        cout<<maxindx;
} 