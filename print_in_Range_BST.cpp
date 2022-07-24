#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int key)
{
    if (root == NULL)
        return new Node(key);

    if (root->left)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}

void printInrange(Node *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data >= k1 and root->data <= k2)
    {
        printInrange(root->left, k1, k2);
        cout << root->data << " ";
        printInrange(root->right, k1, k2);
    }
    else if (root->data > k2)
    {
        printInrange(root->left, k1, k2);
    }
    else
    {
        printInrange(root->right, k1, k2);
    }
}

// void print(Node *root)
// {
//     if (root == NULL)
//         return;
//     print(root->left);
//     cout << root->data << " ";
//     print(root->right);
// }

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *node = NULL;
    // vector<vector<int>> v{{0,0}};

    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (auto it : arr)
    {
        node = insert(node, it);
    }

    cout << "\n";
    printInrange(node, 1, 12);
    cout << "\n";

    return 0;
}