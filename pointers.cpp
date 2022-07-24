#include <bits/stdc++.h>
using namespace std;

int main(){


int x=45;

int *ptr=&x;

int **xptr=&ptr;

cout<<"The value of x is :- "<<x<<endl;
cout<<"The value of x is :- "<<*ptr<<endl;
cout<<"The value of x is :- "<<*(&x)<<endl;
cout<<"The value of x is :- "<<**xptr<<endl;





return 0;

}