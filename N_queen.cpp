#include <bits/stdc++.h>
using namespace std;

bool canplace(int board[][20], int n, int x, int y)
{
    //column check
    for (int k = 0; k < n; k++)
    {
        if (board[k][y] == 1)
        {
            return false;
        }
    }
    // left diagonal
    int i = x, j = y;
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--, j--;
    }
    i = x;
    j = y;
    // right diagnoal
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
        i--, j++;
    }
    return true;
}

void printboard(int n, int board[][20])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool solve(int n, int board[][20], int i)
{

    if (i == n)
    {
        printboard(n, board);
        return true;
    }

    for (int j = 0; j < n; j++)
    {
        if (canplace(board, n, i, j))
        {
            board[i][j] = 1;
            bool succes = solve(n, board, i + 1);
            if (succes)
            {
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{

    int board[20][20] = {0};
    int n;
    cin >> n;
    solve(n, board, 0);

    return 0;
}