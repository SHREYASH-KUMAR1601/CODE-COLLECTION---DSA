#include <bits/stdc++.h>
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

    int shortestpath(T src, T dest)
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

        return distance[dest];
    }
};

int main()
{
    Graph<int> g;
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;

    int dice;
    for (int src = 0; src < 36; src++)
    {
        for (int dice = 1; dice <= 6; dice++)
        {
            int dest = src + dice + board[src + dice];
            g.addedge(src, dest);
        }
    }
    g.shortestpath(1, 36);
    return 0;
}