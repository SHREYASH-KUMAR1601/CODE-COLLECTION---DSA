#include <iostream>
using namespace std;

class Queue
{
    int *arr = new int[5];
    int cs, ts = 5;
    int s = 0, e = -1;

public:
    // push
    void push(int d)
    {
        if (cs < ts)
        {
            e = (e + 1) % 5;
            arr[e] = d;
            cs++;
        }
        else
        {
            cout << "Overflow" << endl;
        }
    }

    // pop
    void pop()
    {
        if (cs > 0)
        {
            s = (s + 1) % ts;
            cs--;
        }
        else
        {
            cout << "Underflow" << endl;
        }
    }
    // front
    int front()
    {
        return arr[s];
    }

    // size
    int size()
    {
        return cs;
    }

    // empty
    bool empty()
    {
        return cs == 0;
    }
};
int main()
{
    Queue q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(4);
    q.pop();
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}