#include <unordered_map>
#include <string>

using namespace std;

class Trie;

class Node
{

private:
    char data;
    unordered_map<char, Node *> m;
    bool isterminal;

public:
    Node(char d)
    {
        data = d;
        isterminal = false;
    }

    friend class Trie;
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node('\0');
    }

    void insert(string word)
    {
        Node *temp = root;

        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                Node *n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isterminal = true;
    }

    bool search(string word)
    {
        Node *temp = root;

        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isterminal;
    }
};
