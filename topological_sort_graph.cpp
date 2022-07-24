#include <bits/stdc++.h>
using namespace std;

class Graph
{

    int v;
    list<int> *l;

public:
    Graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }

    void addedge(int i, int j, bool undi = true)
    {
        l[i].push_back(j);
        if (undi)
        {
            l[j].push_back(i);
        }
    }

    void print()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << "-->";
            for (auto node : l[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }

    void topological_sort()
    {

        vector<int> indegree(v, 0);

        for (int i = 0; i < v; i++)
        {

            for (auto nb : l[i])
            {
                indegree[nb]++;
            }
        }

        queue<int> q;

        for (int i = 0; i < v; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int node = q.front();
            cout << node << ",";
            q.pop();

            for (auto nbr : l[node])
            {
                indegree[nbr]--;
                if (indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Graph g(6);
    g.addedge(0, 1);
    g.addedge(0, 4);
    g.addedge(2, 1);
    g.addedge(3, 4);
    g.addedge(4, 5);
    g.addedge(2, 3);
    g.addedge(3, 5);

    // g.print();
    // g.BFS(1);
    g.topological_sort();

    return 0;
}