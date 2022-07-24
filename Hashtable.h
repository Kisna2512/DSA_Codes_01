#include <iostream>
#include <string>

using namespace std;

template <typename T>

class Node
{
public:
    string key;
    T value;
    Node *next;

    Node(string key, T value)
    {
        this->key = key;
        this->value = value;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

template <typename T>
class Hashtable
{
private:
    Node<T> **table;
    int cs;
    int ts;

    int hasgfn(string key)
    {
        int idx = 0;
        int power = 1;

        for (auto ch : key)
        {
            idx = (idx + ch * power) % ts;
            power = (power * 29) % ts;
        }

        return idx;
    }

    void rehash()
    {

        Node<T> **oldtable = table;
        int oldts = ts;
        cs = 0;
        ts = 2 * ts + 1;

        table = new Node<T> *[ts];

        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }

        for (int i = 0; i < oldts; i++)
        {
            Node<T> *temp = oldtable[i];

            while (temp != NULL)
            {

                string key = temp->key;
                T value = temp->value;

                insert(key, value);
                temp = temp->next;
            }

            if (oldtable[i] != NULL)
            {
                delete oldtable[i];
            }
        }
        delete[] oldtable;
    }

public:
    Hashtable(int default_size = 7)
    {
        cs = 0;
        ts = default_size;
        table = new Node<T> *[ts];

        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, T value)
    {
        int idx = hasgfn(key);

        Node<T> *n = new Node<T>(key, value);

        n->next = table[idx];
        table[idx] = n;
        cs++;
        float load_factor = cs / float(ts);
        if (load_factor > 0.7)
        {
            rehash();
        }
    }

    T *search(string key)
    {
        int idx = hasgfn(key);

        Node<T> *temp = table[idx];

        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return &temp->value;
            }
        }
        return NULL;
    }

    T &operator[](string key)
    {

        T *keyfound = search(key);
        if (keyfound == NULL)
        {
            T object;
            insert(key, object);
            keyfound = search(key);
        }

        return *keyfound;
    }

        void print()
    {
        int i = 0;

        for (i = 0; i < ts; i++)
        {
            cout << "Bucket " << i << "->";
            Node<T> *temp = table[i];

            while (temp != NULL)
            {
                cout << temp->key << " ->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
