#include <bits/stdc++.h>
using namespace std;

void print(int arr[][100],int m,int n){
    cout<<"Your given array/2d-array is:- "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}

int main()
{

    int m, n;
    cout << "Enter the No of rows and cloumns respectively:- " << endl;
    cin >> m >> n;
    int arr[100][100];
    cout << "Enter the matrix element:- " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    print(arr,m,n);

    return 0;
}