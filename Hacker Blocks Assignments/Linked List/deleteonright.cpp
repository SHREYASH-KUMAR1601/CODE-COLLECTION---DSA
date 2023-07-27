#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }    
};

void insertattail(node*&head,node*&tail,int d){
    if(head==NULL){
        node*p=new node(d);
        head=p;
        tail=p;
    }
    else{
        node*p=new node(d);
        tail->next=p;
        tail=p;
    }
}

void printll(node*head){                                   
    node*temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

// 12 15 10 11 5 6 2 3
void deleteatright(node*head){
    node*current=head;
    node*maxnode=head;
    node*prev=NULL;
    while (current!=NULL && current->next!=NULL)
    {
        if(current->next->data > maxnode->data){
            //delete current node
            if(current==head){
                head=head->next;
            }
            else{
                prev->next=current->next;
            }
            node*p=current;
            current=current->next;
            delete p;
        }
        else{
            // move to next node
            prev=current;
            current=current->next;
            maxnode=current;
        }
    }
    
   
}


int main(){
    node*head=NULL;
    node*tail=NULL;

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        insertattail(head,tail,k);
    }
    deleteatright(head);
    printll(head);
    return 0;
}