#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <climits>
using namespace std;

class Graph
{

    int v;
    list<pair<int, int>> *l;

public:
    Graph(int V)
    {
        v = V;
    }

    void addedge(int i, int j, int wt, bool undi = true)
    {
        l[i].push_back({wt, j});
        if (undi)
        {
            l[j].push_back({wt, i});
        }
    }

    int dijtkras(int src, int dest)
    {

        vector<int> dist(v, INT_MAX);
        set<pair<int, int>> s;

        // init

        dist[src] = 0;
        s.insert({0, src});

        while (!s.empty())
        {
            auto it = s.begin();
            int node = it->second;
            int disttillnode = it->first;
            s.erase(it);

            // iterate over the nbrs of node
            for (auto nbrpair : l[node])
            {
                int nbr = nbrpair.second;
                int currentedge = nbrpair.first;

                if (disttillnode + currentedge < dist[nbr])
                {
                    auto f = s.find({dist[nbr], nbr});
                    if (f != s.end())
                    {
                        s.erase(f);
                    }

                    dist[nbr] = disttillnode + currentedge;
                    s.insert({dist[nbr], nbr});
                }
            }
        }
        for (int i = 0; i < v; i++)
        {
            cout << "Node i:- " << i
                 << " Dist " << dist[i] << endl;
        }

        return dist[dest];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Graph g(5);
    g.addedge(0, 1, 1);
    g.addedge(1, 2, 1);
    g.addedge(0, 2, 4);
    g.addedge(0, 3, 7);
    g.addedge(3, 2, 2);
    g.addedge(3, 4, 3);

    cout << "The shortest path is :- " << g.dijtkras(0, 4) << endl;

    //    this graph is like this
    //       1
    //   0--------->1
    //   | \       |
    // 7 |   \ 4   | 1
    //   |     \   |
    //   3       2

    return 0;
}