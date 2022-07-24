#include <iostream>
#include "trie.h"

using namespace std;

int main()
{

    string words[] = {"Hello", "Mango", "Yash", "krishna", "shubham", "Avdesh"};
    Trie t;

    for (auto w : words)
    {
        t.insert(w);
    }

    string key;
    cout << "Enter the string which u have to search:- " << endl;
    cin >> key;
    if (t.search(key))
    {
        cout << "Your Given key is present in Trie" << endl;
    }
    else
    {
        cout << "Your given key is not in Trie" << endl;
    }

    return 0;
}
