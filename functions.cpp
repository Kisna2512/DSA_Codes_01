#include <bits/stdc++.h>
using namespace std;

// sum

int sumoftwo(int a, int b)
{
    return a + b;
}

int Diff(int a, int b)
{
    return a - b;
}

void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "The value of a and b after swapping is:- " << a << "," << b << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int a, b;
    cin >> a >> b;

    cout << "The sum of two numbers: " << sumoftwo(a, b) << endl;
    cout << "The Diff of two numbers: " << Diff(a, b) << endl;
    swap1(a, b);

    return 0;
}