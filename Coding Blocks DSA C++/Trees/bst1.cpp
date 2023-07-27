#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;

        node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

node*insertinBST(node*root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }

    else if(data>root->data){
       root->right=insertinBST(root->right,data);
       return root;
    }

    else{
        root->left=insertinBST(root->left,data);
        return root;
    }
}

node*BuildBST(){
    node*root=NULL;
    int data;
    cin>>data;

    while(data!=-1){
    insertinBST(root,data);
    cin>>data;
    }
    return root;
}

bool searchinBST(node*root,int key){
    if(root==NULL){
        return false;
    }

    if(root->data==key){
        return true;
    }
    else if(root->data>key){
        return searchinBST(root->left,key);
    }
    else{
        return searchinBST(root->right,key);
    }
    
}

void noinrangeK1andK2(node*root,int k1, int k2){
    // base case
    if(root==NULL){
        return;
    }

    //rec case
    noinrangeK1andK2(root->left,k1,k2);
    if(root->data>=k1 and root->data<=k2){
        cout<<root->data<<" ";
    }
    noinrangeK1andK2(root->right,k1,k2);
}

int main(){

    return 0;
}