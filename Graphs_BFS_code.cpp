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

    void BFS(int source)
    {

        queue<int> q;
        bool *visit = new bool[v]{0};

        q.push(source);
        visit[source] = true;

        while (!q.empty())
        {
            int t = q.front();
            cout << t << " ";

            q.pop();

            for (auto n : l[t])
            {
                if (!visit[n])
                {
                    q.push(n);
                    visit[n] = true;
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
    g.BFS(1);

    return 0;
}