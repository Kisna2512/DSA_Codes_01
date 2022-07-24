#include <bits/stdc++.h>
using namespace std;


bool compare(int a,int b){
    return a<b;
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
    // sort(arr,arr+n);
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
return 0;

}