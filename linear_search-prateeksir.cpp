#include <iostream>
using namespace std;


int linear_search(int arr[],int n,int key){

   for(int i=0;i<n;i++){
	   if(arr[i]==key){
		   return i;
	   }
   }
   return -1;

}
int main() {
	
	int n;
	cout<<"Enter the size of an array:- "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in array:- "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the key you want to find:- "<<endl;
	cin>>key;
	int idx=linear_search(arr,n,key);
	if(idx!=-1){
		cout<<"Your key is prsent at index:-"<<idx<<endl;
	}
	else{
		cout<<"your key is not found...."<<endl;
	}

	return 0;
}
