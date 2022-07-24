#include <bits/stdc++.h>
using namespace std;

void printallpaires(int arr[],int n){
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=i+1;j<n;j++){
            int y=arr[j];
            cout<<x<<","<<y<<endl;
        }
        cout<<endl;
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
    cout<<"These are the paires which we will get:- "<<endl;
    printallpaires(arr,n);
return 0;

}