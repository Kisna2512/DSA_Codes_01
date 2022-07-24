#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n, int key )
{
    int s = 0;
    int e = n - 1;
    
    while (s <= e)
    {
        int mid = (s + e) / 2;


        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[s] <= arr[mid])
        {
            if (key>=arr[s] and key<=arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
            else
            {
                
                    if (key>=arr[mid] and key<=arr[e])
                    {
                            s = mid + 1;
                    }
                    else
                    {
                       e = mid - 1;
                    }
                
            }
        
   
}
 return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<"The element at index is:- "<<binary_search(arr,n,key);

    return 0;
}