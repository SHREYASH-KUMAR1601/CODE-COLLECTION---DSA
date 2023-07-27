#include <iostream>
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
class Queue
{
    node *head;
    node *tail;
    int len;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        len = 0;
    }

    // push         ---->INSERT AT TAIL
    void push(int d)
    {
        if (head == NULL)
        {
            node *n = new node(d);
            head = n;
            tail = n;
        }
        else
        {
            node *n = new node(d);
            tail->next = n;
            tail = n;
        }
        len++;
    }

    // pop          ----->DELETE AT HEAD
    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        else if (head->next == NULL)
        {
            delete head;
            head == NULL;
            tail == NULL;
        }
        else
        {
            node *temp = head->next;
            delete head;
            head = temp;
        }
        len--;
    }
    // front
    int front()
    {
        return head->data;
    }

    // size
    int size()
    {
        return len;
    }

    // empty
    bool empty()
    {
        return len == 0;
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