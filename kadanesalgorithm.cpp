#include <bits/stdc++.h>
using namespace std;
// kadan's algorithm sum approch  time complexity:- o[n]
int sumofsubarrays(int arr[],int n){
    int cs=0;
    int large=0;
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        large=max(large,cs);
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