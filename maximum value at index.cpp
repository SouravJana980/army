#include<iostream>
using namespace std;
int main(){
    int n;
    int maxvalue = 0;
    int maxindx = 0;
    cout<<"enter numer n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n;i++){
        if(maxvalue<arr[i]){
            maxvalue = arr[i];
            maxindx = i;
        }
    }
    cout<<maxvalue<<endl;
    cout<<maxindx;
}