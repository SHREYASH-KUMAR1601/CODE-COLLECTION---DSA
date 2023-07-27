#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Graph
{
    list<int> *l;
    int n;

public:
    Graph(int size)
    {
        n = size;
        l = new list<int>[size];
    }

    void addedge(int u, int v, bool bidirection = true)
    {
        l[u].push_back(v);
        if (bidirection == true)
        {
            l[v].push_back(u);
        }
    }

    void printgraph()
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << "-->";
            for (auto x : l[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5);
    g.addedge(0, 1);
    g.addedge(0, 4);
    g.addedge(1, 4);
    g.addedge(4, 3);
    g.addedge(1, 3);
    g.addedge(1, 2);
    g.addedge(2, 3);
    g.printgraph();
    return 0;
}