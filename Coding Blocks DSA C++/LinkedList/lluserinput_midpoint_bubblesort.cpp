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

void insertathead(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *p = new node(d);
        head = p;
        tail = p;
    }
    else
    {
        node *p = new node(d);
        p->next = head;
        head = p;
    }
}

void insertattail(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *p = new node(d);
        head = p;
        tail = p;
    }
    else
    {
        node *p = new node(d);
        tail->next = p;
        tail = p;
    }
}

int lengthofll(node *&head)
{
    int co = 0;
    node *p = head;
    while (p != NULL)
    {
        co++;
        p = p->next;
    }
    return co;
}

int lengthofllrec(node *head)
{
    // base case
    if (head == NULL)
    {
        return 0;
    }

    // rec case
    return 1 + lengthofllrec(head->next);
}

void insertatanyposition(node *&head, node *&tail, int pos, int d)
{
    if (pos == 0)
    {
        insertathead(head, tail, d);
    }
    else if (pos > lengthofll(head))
    {
        insertattail(head, tail, d);
    }
    else
    {
        node *p = new node(d);
        node *temp = head;
        for (int l = 0; l < pos - 1; l++)
        {
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = p;
    }
}

void deleteathead(node *&head, node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        node *temp = head->next;
        delete head;
        head = temp;
    }
}

void deleteattail(node *&head, node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
}

void deleteatanyposition(node *&head, node *&tail, int pos)
{
    if (pos == 0)
    {
        deleteathead(head, tail);
    }
    else if (pos >= lengthofll(head) - 1)
    {
        deleteattail(head, tail);
    }
    else
    {
        node *temp = head;
        for (int l = 0; l < pos - 1; l++)
        {
            temp = temp->next;
        }
        node *t = temp->next;
        temp->next = t->next;
        delete t;
        t = NULL;
    }
}

bool searchinll(node *&head, node *&tail, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool searchinllrec(node *head, int key)
{
    // base case
    if (head == NULL)
    {
        return false;
    }

    // rec case
    if (head->data == key)
    {
        return true;
    }
    return searchinllrec(head->next, key);
}

void printll(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// even linkedlist 1st midpoint
int midpointoflle1(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

// even linked list second midpoint
int midpointoflle2(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

// odd linked list midpoint
int midpointofllo(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

void bubblesort(node *head, node *tail)
{
    for (int i = 1; i <= lengthofll(head) - 1; i++)
    {
        for (node *j = head; j != tail; j = j->next)
        {
            if (j->data > j->next->data)
            {
                swap(j->data, j->next->data);
            }
        }
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int n;
    cout << "Enter the no. of elements in linked list" << endl;
    cin >> n;
    for (int p = 0; p < n; p++)
    {
        int d;
        cout << "Enter element no. " << p + 1 << "   ";
        cin >> d;
        insertattail(head, tail, d);
    }
    printll(head);
    if (lengthofll(head) % 2 == 0)
    { // if(n%2==0){}
        cout << "The linked List has two midpoints." << endl;
        cout << "The midpoint 1 of Linked List is  " << midpointoflle1(head) << endl;
        cout << "The midpoint 2 of Linked List is  " << midpointoflle2(head) << endl;
    }
    else
    {
        cout << "The midpoint of Linked List is  " << midpointofllo(head) << endl;
    }
    return 0;
}