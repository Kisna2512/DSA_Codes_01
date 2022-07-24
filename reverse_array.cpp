#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
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
    cout<<"Your given array is:- "<<endl;
    for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
    cout<<endl;
    reverse_array(arr,n);
     cout<<"Your reversed array is:- "<<endl;
    for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
    cout<<endl;
return 0;

}