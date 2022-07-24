#include <bits/stdc++.h>
using namespace std;

int fib(int n, int dp[])
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the value of n:- " << endl;
    cin >> n;
    int dp[100] = {0};
    cout << "The " << n << "th fibonacci no is:  " << fib(n, dp) << endl;

    return 0;
}