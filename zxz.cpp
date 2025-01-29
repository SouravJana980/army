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
    sum+=arr[i];
  }
  cout<<sum;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n:";
    cin>>n;
    int arr[n];
 
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}