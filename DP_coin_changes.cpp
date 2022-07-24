#include <bits/stdc++.h>
using namespace std;

int mincoin(int m, vector<int> &des)
{
    vector<int> dp(m + 1, 0);
    dp[0] = 0;

    for (int i = 1; i <= m; i++)
    {
        dp[i] = INT_MAX;

        for (auto c : des)
        {
            if (i - c >= 0 and dp[i - c] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
    return dp[m]==INT_MAX ? -1 :dp[m];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> des = {1, 3, 5, 7};
    int m = 8;

    cout << mincoin(m, des);

    return 0;
}