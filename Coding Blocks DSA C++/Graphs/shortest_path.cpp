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

    void shortestpath(T src, T dest)
    {
        queue<T> q;
        q.push(src);
        unordered_map<T, bool> visited;
        visited[src] = true;
        unordered_map<T, int> distance;
        distance[src] = 0;
        unordered_map<T, T> parent;
        parent[src] = src;
        while (!q.empty())
        {
            T n = q.front();
            q.pop();
            for (auto x : h[n])
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                    distance[x] = distance[n] + 1;
                    parent[x] = n;
                }
        }
        T temp = dest;
        while (temp != parent[temp])
        {
            cout << temp << "<--";
            temp = parent[temp];
        }
        cout << temp << endl;
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
    g.shortestpath(4, 0);
    return 0;
}