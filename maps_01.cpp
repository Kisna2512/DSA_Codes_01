#include <bits/stdc++.h>
using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

map<int ,float>mp;

mp[2]=3.4;
mp[1]=2.3;
mp[3]=2.3;
mp[4]=2.4;
mp[1]=2.2;


unordered_map<int,float>ump;

ump[2]=4.6;
ump[1]=4.1;
ump[12]=4.6;
ump[5]=4.3;

if(ump.find(1)==ump.end()){
    cout<<"Not found"<<endl;
}
else{
    cout<<"Found"<<endl;
}

mp.insert({23,34.5});

for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}



return 0;

}