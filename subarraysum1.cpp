#include <bits/stdc++.h>
using namespace std;
// brute force approch time complexity:- o[n^3]
int sumofsubarrays(int arr[],int n){
    int large=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currsum=0;
            for(int k=i;k<=j;k++){
            currsum+=arr[k];
            }
          large=max(large,currsum);
        }
     
    }
    return large;
}


int main(){
  int n;
	cout<<"Enter the size of an array:- "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in array:- "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    
    cout<<"The maximum sum is:- "<<sumofsubarrays(arr,n);
return 0;

}