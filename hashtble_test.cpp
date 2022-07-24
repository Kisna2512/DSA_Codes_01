#include <iostream>
#include "Hashtable.h"

using namespace std;

int main()
{

    Hashtable<int> h;
    h.insert("Mango", 100);
    h.insert("Apple", 150);
    h.insert("Guvi", 200);
    h.insert("banana", 300);

    // h.print();

    // string fruit;
    // cout << "Enter the fruit to search:- " << endl;
    // cin >> fruit;

    // int *price = h.search(fruit);

    // if (price != NULL)
    // {
    //     cout << "The price of fruit is:- " << *price << endl;
    // }
    // else
    // {
    //     cout << "fruit is not present " << endl;
    // }

    h.Remove("Guvi");
    h.print();
    return 0;
}