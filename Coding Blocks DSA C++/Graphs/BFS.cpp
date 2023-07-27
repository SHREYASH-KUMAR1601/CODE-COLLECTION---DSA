#include <bits/stdc++.h>
#include <iostream>
using namespace std;
template <typename T>
class Graph
{
    unordered_map<T, list<T>> h;

public:
    void addedge(T u, T v, bool bidirection = false)
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
            for (string p : x.second)
            {
                cout << p << " ";
            }
            cout << endl;
        }
    }

    void bfs(T src)
    {
        queue<T> q;
        q.push(src);
        unordered_map<T, bool> visited;
        visited[src] = true;
        while (!q.empty())
        {
            T n = q.front();
            q.pop();
            cout << n << " ";
            for (auto x : h[n])
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                }
        }
    }
};

int main()
{
    Graph<int> g;
    g.addedge(0, 1, true);
    g.addedge(1, 2, true);
    g.addedge(2, 4, true);
    g.addedge(3, 4, true);
    g.addedge(0, 3, true);
    g.addedge(1, 3, true);
    g.bfs(2);
    return 0;
}