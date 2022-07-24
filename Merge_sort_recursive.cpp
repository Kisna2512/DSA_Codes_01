#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[k++];
    }
    return;
}

void merge_sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);

    return merge(arr, s, e);
}

int main()
{

    vector<int> arr;
    int n = arr.size();
    cin >> n;
    int s = 0;
    int e = n - 1;
    for (int i = 0; i <= e; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "sort the array using merge sort:- " << endl;
    merge_sort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}