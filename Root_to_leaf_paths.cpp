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

void roadpaths(Node *root, vector<int> &arr)
{

    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        for (auto it : arr)
        {
            cout << it << " ->";
        }
        cout << root->data << "->";
        cout<<"NULL";
        cout << endl;
        return;
    }

    arr.push_back(root->data);
    roadpaths(root->left, arr);
    roadpaths(root->right, arr);

    arr.pop_back();
    return;
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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(7);
    vector<int> arr;
    cout << "Road to leaf are:- " << endl;
    roadpaths(root, arr);
    // this tree is like this
    //      1
    //     / \
    //    2   3
    //   / \   \
    //   5  4   7
    return 0;
}