#include <bits/stdc++.h>
using namespace std;

void print(int arr[100][100], int m, int n)
{
    int srow = 0;
    int erow = m - 1;
    int scol = 0;
    int ecol = n - 1;

    while (scol <= ecol and srow <= erow)
    {

        for (int i = scol; i <= ecol; i++)
        {
            cout << arr[srow][i] << " ";
        }
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << arr[i][ecol] << " ";
        }
        for (int i = ecol - 1; i >= scol; i--)
        {
            if (srow == erow)
            {
                break;
            }
            cout << arr[erow][i] << " ";
        }
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << arr[i][scol] << " ";
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }
}

int main()
{

    int m = 4, n = 4;
    cin >> m >> n;
    // int arr[100][100]={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
    int arr[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    print(arr, m, n);

    return 0;
}