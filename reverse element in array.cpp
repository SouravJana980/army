#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n:";
    cin>>n;
    int sum = 0;
    int arr[n];
 
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  int i=0,j=n-1;
  while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    }
     for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}