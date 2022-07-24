#include<iostream>
#include "stackv.h"

using namespace std;

int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL);

stack<int> s;

s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);


while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}


return 0;

}

