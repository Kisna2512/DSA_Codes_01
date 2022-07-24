#include <bits/stdc++.h>
using namespace std;

int main(){

vector<int>arr={1,2,3,4,5};
int key;
cin>>key;
vector<int>::iterator it=find(arr.begin(),arr.end(),key);

if(it!=arr.end()){
    cout<<"element is prsent at:-  "<<it-arr.begin();
}
else{
    cout<<"Not found";
}




return 0;

}