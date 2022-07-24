#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.push_back(6);
    for (auto x : v)
    {
        cout << x << " ";
    }
    v.pop_back();
    return 0;
}