#include <bits/stdc++.h>
using namespace std;



int** createarray(int rows,int columns){

   int** arr=new int*[rows];

   for(int i=0;i<rows;i++){
       arr[i]=new int[columns];
   }
     int val=0;

     for(int i=0;i<rows;i++){
         for(int j=0;j<columns;j++){
                 arr[i][j]=val;
                 val++;
         }
     }


return arr;



}

int main(){

int rows,columns;
cin>>rows>>columns;

int** arr=createarray(rows,columns);


for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<arr[i][j]<<" ";
    }


cout<<endl;
    
}

return 0;

}