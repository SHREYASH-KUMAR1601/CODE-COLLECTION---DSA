#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    vector<int> v; // vector is not made public because stack functionality is that only top element can be accessed, but if we make vector public, we can access any element.

public:
    void push(int d)
    {
        v.push_back(d);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v[v.size() - 1];
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.size() == 0;
    }
};

void StackPrint(Stack s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    Stack s;
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(9);
    StackPrint(s);
    s.pop();
    s.pop();
    StackPrint(s);
    return 0;
}