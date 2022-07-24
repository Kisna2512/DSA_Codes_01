#include <bits/stdc++.h>
using namespace std;

string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spell(int n)
{
    if (n == 0)
    {
        return;
    }

    int last_digit = n % 10;
    spell(n / 10);
    cout << num[last_digit];
}

int main()
{

    int n;
    cin >> n;
    spell(n);

    return 0;
}