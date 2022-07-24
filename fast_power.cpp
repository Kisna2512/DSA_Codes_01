#include <bits/stdc++.h>
using namespace std;
// this is optimized solution of power function
int fastpower(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int sub = fastpower(a, n / 2);
    int subsq = sub * sub;
    if (n & 1)
    {
        return a * subsq;
    }
    return subsq;
}

int main()
{

    int a, n;
    cin >> a >> n;
    cout << "power of " << a << " is:- " << fastpower(a, n);

    return 0;
}