#include <bits/stdc++.h>
using namespace std;

int getbit(int n,int i){
    int mask=(1<<i);
    return (n&mask)>0 ? 1: 0;
}



int main(){

int n=5;
int i;
cin>>i;
cout<<"Bit at position is:- "<<getbit(n,i)<<endl;


return 0;

}