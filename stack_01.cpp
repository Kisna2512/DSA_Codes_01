// #include <bits/stdc++.h>

#include<iostream>
#include "stackll.h"



using namespace std;

int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL);

stack <char> s;

s.push('h');
s.push('e');
s.push('l');
s.push('w');
s.push('a');
s.push('s');

while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}

s.pop();
s.pop();

while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}

return 0;

}