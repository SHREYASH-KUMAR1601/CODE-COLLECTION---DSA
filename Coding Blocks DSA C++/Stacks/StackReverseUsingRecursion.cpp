#include <iostream>
#include <stack>
using namespace std;

void Insertatbottom(stack<int> &s, int ele)
{
    // base case
    if (s.empty())
    {
        s.push(ele);
        return;
    }

    // rec case
    int t = s.top();
    s.pop();
    Insertatbottom(s, ele);
    s.push(t);
}
void StackReverse(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    // rec case
    int ele = s.top();
    s.pop();
    StackReverse(s);
    Insertatbottom(s, ele);
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(9);
    StackReverse(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}