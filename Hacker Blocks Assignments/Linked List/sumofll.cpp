#include<iostream>
#include<cmath>
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

void insertathead(node*&head,node*&tail,int d){
    if(head==NULL){
       node*p=new node(d);
       head=p;
       tail=p;
    }
    else{
         node*p=new node(d);
         p->next=head;
        head=p;
    }
}

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

node*sumofll(node*head1,node*tail1,node*head2,node*tail2,int n,int m){
   
}

void printll(node*head){                                   
    node*temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node*head1=NULL;
    node*tail1=NULL;
   node*head2=NULL;
   node*tail2=NULL;
   
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        insertattail(head1,tail1,k);
    }
     int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int k;
        cin>>k;
        insertattail(head2,tail2,k);
    }

    return 0;
}