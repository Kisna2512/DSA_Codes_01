#include <bits/stdc++.h>
using namespace std;

void paths(int n, int i, string osf)
{
    if (i >= n)
    {
        return;
    }

    if (i == n - 1)
    {
        cout << osf << endl;
        return;
    }

    for (int j = 1; j <= n - 1; j++)
    {
        paths(n, i + j, osf + to_string(j) + "~>");
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    paths(7, 0, "");

    return 0;
}