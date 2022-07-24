
#include <iostream>

using namespace std;

struct Node
{

    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

void print(Node *head)
{
    Node *n = head;
    cout << "NULL->";
    while (n != NULL)
    {
        cout << n->data << " ->"
             << "<-";
        n = n->next;
    }
    cout << "NULL";
}

void revprint(Node *head)
{
    Node *n = head;
    cout << "NULL->";
    while (n != NULL)
    {
        cout << n->data << " ->"
             << "<-";
        n = n->prev;
    }
    cout << "NULL";
}

int main()
{

    Node *n1 = new Node(12);
    Node *n2 = new Node(14);
    Node *n3 = new Node(16);
    Node *n4 = new Node(18);
    Node *n5 = new Node(20);
    Node *n6 = new Node(22);

    n1->prev = NULL;
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    n4->next = n5;
    n5->prev = n4;
    n5->next = n6;
    n6->prev = n5;
    n6->next = NULL;

    cout << "The doubly linked list is:- " << endl;
    print(n1);
    cout << endl;
    cout << "The doubly linked in reverse order list is:- " << endl;
    revprint(n6);

    return 0;
}