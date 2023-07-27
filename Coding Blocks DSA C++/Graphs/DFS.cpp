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

    void DFS(T src, unordered_map<T, bool> &visited) // Passed by reference to store the visited values
    {
        cout << src << " "; // 2 1 0 4 3
        visited[src] = true;
        for (auto x : h[src])
        {
            if (!visited[x])
            {
                DFS(x, visited);
            }
        }
    }
};

int main()
{
    Graph<int> g;
    g.addedge(0, 1);
    g.addedge(1, 2);
    g.addedge(2, 3);
    g.addedge(3, 4);
    g.addedge(0, 4);
    g.addedge(1, 3);
    g.addedge(1, 4);
    unordered_map<int, bool> visited; // hashmap is pass by value
    g.DFS(2, visited);
    return 0;
}