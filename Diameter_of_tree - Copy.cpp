#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildtree()
{

    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *n = new node(d);

    n->left = buildtree();
    n->right = buildtree();

    return n;
}

int height(node *root)
{
    // code here
    //code here
    if (root == NULL)
    {
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1 + max(h1, h2);
}

int diameter(node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int d1 = height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

    return max(d1, max(d2, d3));
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node *root1 = buildtree();

    cout << " Height of tree is " << height(root1) << endl;
    cout << "Diameter of tree:- " << diameter(root1);

    return 0;
}