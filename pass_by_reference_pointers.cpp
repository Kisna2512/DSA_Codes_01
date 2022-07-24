#include <bits/stdc++.h>
using namespace std;

void point(int *a){
    *a=*a+1;
}


int main(){


int b=0;
for (int  i = 0; i < 5; i++)
{
    point(&b);
    cout<<b<<endl;
}



return 0;

}