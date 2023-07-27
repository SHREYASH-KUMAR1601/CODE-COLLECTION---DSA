#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Stack
{
    node *head;
    int l;

public:
    Stack()
    {
        head = NULL;
        l = 0;
    }
    void push(int d)
    {
        node *n = new node(d);
        n->next = head;
        head = n;
        l++;
    }

    void pop()
    {
        node *temp = head;
        head = head->next;
        delete temp;
        temp = NULL;
        l--;
    }

    int top()
    {
        return head->data;
    }

    int size()
    {
        return l;
    }

    bool empty()
    {
        return l == 0;
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
    // cout << endl
    //      << s.top() << endl;
    return 0;
}