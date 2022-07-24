#include <iostream>

using namespace std;

//reverse an array recursively
void reverse_arr(int arr[],int n){
   if(n==0){
       return;
   }
   cout<<arr[n-1]<<" ";
   reverse_arr(arr,n-1);
   
}




int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"Reverseed array:- "<<endl;
  reverse_arr(arr,n);
}