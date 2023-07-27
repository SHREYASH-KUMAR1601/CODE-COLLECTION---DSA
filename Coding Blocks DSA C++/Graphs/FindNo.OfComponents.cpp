#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
    unordered_map<T, list<T>> h;

public:
    void addedge(T u, T v, bool bidirection = true)
    {
        h[u].push_back(v);
        if (bidirection == true)
        {
            h[v].push_back(u);
        }
    }

    void printgraph()
    {
        for (auto x : h)
        {
            cout << x.first << " : ";
            for (T p : x.second)
            {
                cout << p << " ";
            }
            cout << endl;
        }
    }

    void DFS(T src, unordered_map<T, bool> &visited)
    {
        // cout << src << " "; // 2 1 0 4 3
        visited[src] = true;
        for (auto x : h[src])
        {
            if (!visited[x])
            {
                DFS(x, visited);
            }
        }
    }

    int no_of_components(T src, unordered_map<int, bool> &visited)
    {
        int component = 1;
        DFS(src, visited);
        for (auto x : h)
        {
            if (!visited[x.first])
            {
                DFS(x.first, visited);
                component++;
            }
        }
        return component;
    }
};

int main()
{
    Graph<int> g;
    // 1st component
    g.addedge(0, 1);
    g.addedge(1, 2);
    g.addedge(2, 3);
    g.addedge(3, 4);
    g.addedge(0, 4);
    g.addedge(1, 3);
    g.addedge(1, 4);

    // 2nd component
    g.addedge(11, 12);
    g.addedge(11, 13);
    g.addedge(12, 13);

    // 3rd component
    g.addedge(100, 101);
    g.addedge(100, 102);

    // 4th component
    g.addedge(200, 205);
    g.addedge(205, 208);
    // g.printgraph();
    unordered_map<int, bool> visited;
    cout << g.no_of_components(2, visited) << endl;
    return 0;
}