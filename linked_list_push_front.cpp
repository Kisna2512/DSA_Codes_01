#include <iostream>

using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node *head = NULL;

void push(int data)
{
    if (head == NULL)
    {
        node *n = new node(data);
        head = n;
    }
    else
    {
        node *n = new node(data);
        n->next = head;
        head = n;
    }
}

void push_back(int data) //this print linked liat
{
    if (head == NULL)
    {
        node *n = new node(data);
        head = n;
    }
    else
    {
        node *n = new node(data);
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
    }
}

void insertatidx(int data, int pos)
{
    node *n = new node(data);

    if (pos == 0)
    {
        push(data);
        return;
    }

    node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}


// void deleteatfirst(node* head){
//     head=head->next;
// }

void display()
{
    while (head != NULL)
    {
        cout << head->data << "=>";
        head = head->next;
    }
    cout << "NULL";
}

// bool search(node* head,int key)
// {

//     int cnt = 0;

//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (head->data == key)
//         {
            
//             return true;
//         }
//         head = head->next;
//     }
  
//     return false;
// }

// bool recursivesearch(node*head,int key){
//     if(head==NULL){
//         return false;
//     }
//     if(head->data==key){
//         return true;
//     }
//     return recursivesearch(head->next,key);
// }
// thia is not working

// int  search(node* head,int key)
// {

//     int cnt = 0;

//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == key)
//         {
           
//             return cnt;
//         }
//          cnt++;
//         temp = temp->next;
//     }
  
//     return -1;
// }











int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    push_back(34);
    push_back(35);
    push_back(36);
    push_back(37);
    push_back(38);
    push_back(39);
    push_back(35);
    push_back(32);
    insertatidx(2, 0);
    display();
  
    cout<<"\n";    
       
   
    return 0;
}