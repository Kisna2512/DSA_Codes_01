#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void insertatlast(stack<int> &s,int data){
    if(s.empty()){
        s.push(data);
        return;
    }

    int temp=s.top();
    s.pop();

    insertatlast(s,data);
    s.push(temp);
}



int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL);

stack<int> s;

s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);

insertatlast(s,15);

while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}


return 0;

}