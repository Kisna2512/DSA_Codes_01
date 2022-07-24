#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> myque;

    myque.push(2);
    myque.push(4);
    myque.push(3);
    myque.push(1);
    myque.push(6);
    myque.push(45);
    myque.push(277);

    while (!myque.empty())
    {
        cout << myque.front() << endl;
        myque.pop();
    }

    return 0;
}