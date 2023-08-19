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

node *cycleatkthposition(node *head, node *tail, int pos)
{
    node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }
    node *p = temp;
    tail->next = p;
    return head;
}

int kthnodefromend(node *head, int pos)
{
    node *p1 = head;
    node *p2 = head;
    for (int i = 1; i <= pos; i++)
    {
        p2 = p2->next;
    }
    while (p2 != NULL)
    {
        p2 = p2->next;
        p1 = p1->next;
    }
    return p1->data;
}

void breakcycle(node *head)
{
    node *fast = head;
    node *slow = head;
    bool cyclepresentornot = false;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            cyclepresentornot = true;
            break;
        }
    }
    if (cyclepresentornot == true)
    {
        slow = head;
        while (fast->next != slow->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else
    {
        cout << "No cycle present.";
    }
}

node *mergetwosortedll(node *head1, node *head2)
{
    // base case
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    // rec case
    node *newhead = NULL;
    if (head1->data < head2->data)
    {
        newhead = head1;
        newhead->next = mergetwosortedll(head1->next, head2);
        return newhead;
    }
    else
    {
        newhead = head2;
        newhead->next = mergetwosortedll(head1, head2->next);
        return newhead;
    }
}

// node*midpointofllo(node*head){
//     node*fast=head;
//     node*slow=head;
//     while(fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     return slow;
// }

node *midpointofllo(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL and fast->next != NULL)
    {
        // while( fast->next!=NULL and fast!=NULL){
        fast = fast->next->next; // 7 //seg fault
        slow = slow->next;
    }
    // return slow->data;
    return slow;
}

node *mergesort(node *head1)
{
    // base case
    if (head1 == NULL || head1->next == NULL)
    {
        return head1;
    }

    // rec case
    node *mid = midpointofllo(head1);
    node *temp = mid->next;
    mid->next = NULL;
    node *x = mergesort(head1);
    node *y = mergesort(temp);
    return mergetwosortedll(x, y);
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
    node *head1 = NULL;
    node *tail1 = NULL;
    //    node*head2=NULL;
    //    node*tail2=NULL;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        insertattail(head1, tail1, k);
    }
    //  int m;
    // cin>>m;
    // for (int i = 0; i < m; i++)
    // {
    //     int k;
    //     cin>>k;
    //     insertattail(head2,tail2,k);

    //    printll(mergetwosortedll(head1,head2));
    // cout<<kthnodefromend(head,3)<<endl;
    // cycleatkthposition(head,tail,3);
    // breakcycle(head);
    // printll(head);
    // node*nhead=mergesort(head1);
    printll(mergesort(head1));
    return 0;
}
