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

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertathead(head, tail, 10);
    insertathead(head, tail, 20);
    insertathead(head, tail, 30);
    insertathead(head, tail, 40);
    insertattail(head, tail, 50);
    insertattail(head, tail, 60);
    insertattail(head, tail, 70);
    insertattail(head, tail, 80);
    deleteathead(head, tail);
    deleteathead(head, tail);
    deleteathead(head, tail);
    deleteattail(head, tail);
    deleteatanyposition(head, tail, 3);
    insertatanyposition(head, tail, 1, 80);
    deleteatanyposition(head, tail, 2);
    int key;
    cout << "Enter key to search in the linked list"
         << "  ";
    cin >> key;
    if (searchinll(head, tail, key) == true)
    {
        cout << "The key is present" << endl;
    }
    else
    {
        cout << "The key is not present" << endl;
    }
    printll(head);
    cout << "Length of linked list is  " << lengthofll(head) << endl;
    cout << "Length of linked list is  " << lengthofllrec(head) << endl;
    return 0;
}