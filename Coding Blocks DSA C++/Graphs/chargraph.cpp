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
};

int main()
{
    Graph<string> g;
    g.addedge("trump", "modi", true);
    g.addedge("putin", "trump");
    g.addedge("putin", "modi");
    g.addedge("putin", "pope");
    g.addedge("modi", "yogi", true);
    g.addedge("prabhu", "modi");
    g.addedge("modi", "yogi", true);
    g.addedge("yogi", "prabhu");
    g.addedge("pope", "");

    return 0;
}