#include <bits/stdc++.h>
using namespace std;

class compare
{

public:
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {34, 23, 6, 45, 8};

    priority_queue<int, vector<int>, compare> mq;

    for (int x : arr)
    {
        mq.push(x);
    }

    while (!mq.empty())
    {
        cout << mq.top() << endl;
        mq.pop();
    }

    return 0;
}