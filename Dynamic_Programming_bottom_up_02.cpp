#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int dp[n + 1] = {0};

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the value of n:- " << endl;
    cin >> n;

    cout << "The " << n << "th fibonacci no is:  " << fib(n) << endl;

    return 0;
}