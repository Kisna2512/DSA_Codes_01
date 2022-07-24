#include <vector>

using namespace std;

template <typename T>

class Heap
{

    vector<T> v;

    void hepify(int i)
    {

        int left = 2 * i;
        int right = 2 * i + 1;

        int minidx = i;

        if (left < v.size() and v[left] < v[i])
        {
            minidx = i;
        }
        if (right < v.size() and v[right] < v[minidx])
        {
            minidx = i;
        }

        if (minidx != i)
        {
            swap(v[i], v[minidx]);
            hepify(minidx);
        }
    }

public:
    Heap(int default_size = 10)
    {
        v.reserve(default_size + 1);
        v.push_back(-1);
    }

    void push(int data)
    {
        v.push_back(data);

        int idx = v.size() - 1;
        int parent = idx / 2;

        while (idx > 1 and v[idx] < v[parent])
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }

    int top()
    {
        return v[1];
    }

    void pop()
    {
        int idx = v.size() - 1;
        swap(v[1], v[idx]);
        v.pop_back();
        hepify(1);
    }

    bool empty()
    {
        return v.size == 1;
    }
};
