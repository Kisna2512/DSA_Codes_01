#include <bits/stdc++.h>
using namespace std;

int main(){
    
char str;
str=cin.get();

int alpha=0;
int digits=0;
int spaces=0;

while(str!='\n'){
    if(str>='0' and str<='9'){
        digits++;
    }
    else if((str>='a' and str<='z') or (str>='A' and str<='Z')){
        alpha++;
    }
    else if(str == ' ' or str=='\t'){
          spaces++;
    }
    str=cin.get();
}

cout<<"Total Alphabets:- "<<alpha<<endl;
cout<<"Total Digits:- "<<digits<<endl;
cout<<"Total spaces:- "<<spaces<<endl;


return 0;

}