#include <iostream>
#include <queue> // for heaps
using namespace std;
#define heap priority_queue<int, vector<int>, greater<int>>
void printheap(heap h)
{
    while (!h.empty())
    {
        cout << h.top() << " ";
        h.pop();
    }
    cout << endl;
}
int main()
{
    heap h;
    int k;
    cin >> k;
    int data, count = 1;
    while (1)
    {
        cin >> data;
        if (data == -1)
        {
            // print heap
            printheap(h);
        }
        else
        {
            if (count <= k)
            {
                h.push(data);
                count++;
            }
            else
            {
                if (data > h.top())
                {
                    h.pop();
                    h.push(data);
                }
            }
        }
    }
    return 0;
}