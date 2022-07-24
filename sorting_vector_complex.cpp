#include <bits/stdc++.h>
using namespace std;


int calmarks(vector<int>m){
    return m[0]+m[1]+m[2];
}


bool compare(pair<string,vector<int>>s1,pair<string,vector<int>>s2){
    vector<int>m1=s1.second;
    vector<int>m2=s2.second;
    return calmarks(m1)>calmarks(m2);
}




int main(){

vector<pair<string,vector<int>>>students_marks={


{ "Krishna",{15,15,12}},
{  "sarvesh",{12,23,45}},
{   "somesh",{12, 11 ,10}},
{ "shyam",{12,24,34}}            
 
 }; 
sort(students_marks.begin(),students_marks.end(),compare);
for(auto i:students_marks){
    cout<<i.first<<":-"<<calmarks(i.second)<<endl;
}
return 0;

}










