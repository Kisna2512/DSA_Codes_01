#include <bits/stdc++.h>
using namespace std;

void allsets(char *input, char *output, int i, int j)
{

    if (input[i] == '\0')
    {
        output[j] = '\0';
        if (output[0] == '\0')
        {
            cout << "NULL" << endl;
        }
        cout << output << endl;
        return;
    }

    output[j] = input[i];

    allsets(input, output, i + 1, j + 1);
    allsets(input, output, i + 1, j);
}

int main()
{

    char input[100];
    char output[100];

    cin >> input;
  allsets(input,output,0,0);
    return 0;
}