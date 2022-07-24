#include <bits/stdc++.h>
using namespace std;

int last(int arr[], int n, int key)
{

    if (n == 0)
    {
        return -1;
    }


    int subarr = last(arr + 1, n - 1, key);

    if (subarr == -1)
    {
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return subarr+1;
    }

    return -1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << last(arr, n, key) << endl;

    return 0;
}