#include <bits/stdc++.h>
using namespace std;

int totalpaths = 0;
void grid_paths(int i, int j, int n, int m, string osf)
{
    if (i == n - 1 and j == m - 1)
    {
        totalpaths += 1;
        cout << osf << endl;
        return;
    }
    if (j >= m or i >= n)
    {
        return;
    }
    grid_paths(i, j + 1, n, m, osf + "R");
    grid_paths(i + 1, j, n, m, osf + "D");
    grid_paths(i + 1, j+1, n, m, osf + "->");
   
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    grid_paths(0, 0, 3, 3, "");
    cout << "Total paths:- " << totalpaths << endl;

    return 0;
}