#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
node *buildtree()
{
    int n;
    cin >> n;
    if (n == -1)
    {
        return NULL;
    }
    else
    {
        node *root = new node(n);
        root->left = buildtree();
        root->right = buildtree();
        return root;
    }
}

void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // rec case
    cout << (root->data) << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // rec case
    inorder(root->left);
    cout << (root->data) << " ";
    inorder(root->right);
}

void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // rec case
    postorder(root->left);
    postorder(root->right);
    cout << (root->data) << " ";
}

int countofnodes(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // rec case
    return countofnodes(root->left) + countofnodes(root->right) + 1;
}

int sumofnodes(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // rec case
    return sumofnodes(root->left) + sumofnodes(root->right) + root->data;
}

bool searchinaBT(node *root, int key)
{
    // base case
    if (root == NULL)
    {
        return false;
    }

    // rec case
    if (root->data == key || searchinaBT(root->left, key) || searchinaBT(root->right, key))
    {
        return true;
    }
    return false;
}

int heightoftree(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // rec case
    return max(heightoftree(root->left), heightoftree(root->right)) + 1;
}

int diameter(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // rec case
    int op3 = heightoftree(root->left) + heightoftree(root->right);
    return max(diameter(root->left), max(diameter(root->right), op3));
}

// O(n) solution for diameter
class p
{
public:
    int hei;
    int dia;
    p()
    {
        hei = 0;
        dia = 0;
    }
};

p fastdiameter(node *root)
{
    p sol;
    // base case
    if (root == NULL)
    {
        return sol;
    }

    // rec case
    p x = fastdiameter(root->left);
    p y = fastdiameter(root->right);
    sol.hei = max(x.hei, y.hei) + 1;

    int op1 = x.dia;
    int op2 = y.dia;
    int op3 = x.hei + y.hei;
    sol.dia = max(op1, max(op2, op3));

    return sol;
}

void mirror(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // rec case
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

// iterative sol. only
void levelwiseprint(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *x = q.front();
        q.pop();
        if (x == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << x->data << " ";

            if (x->left != NULL)
            {
                q.push(x->left);
            }

            if (x->right != NULL)
            {
                q.push(x->right);
            }
        }
        delete x;
    }
}

node *buildtreelevelwise()
{
    node *root = NULL;
    int data;
    cout << "Enter the data of root:" << endl;
    cin >> data;
    root = new node(data);
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *x = q.front();
        q.pop();
        cout << "Enter the left and right children of " << x->data << endl;
        int le, ri;
        cin >> le >> ri;
        if (le != -1)
        {
            x->left = new node(le);
            q.push(x->left);
        }
        if (ri != -1)
        {
            x->right = new node(ri);
            q.push(x->right);
        }
    }

    return root;
}

int ino[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};  // LST  root  RST
int preo[] = {8, 10, 1, 6, 4, 7, 3, 14, 13}; // root  LST  RST
int i = 0;
node *buildtreeusinginpre(int s, int e)
{
    if (s > e)
    {
        return NULL;
    }

    int data = preo[i];
    i++;
    node *root = new node(data);

    // Iterate in ino from s to e to find data
    int k;
    for (int z = s; z <= e; z++)
    {
        if (ino[i] == data)
        {
            k = z;
            break;
        }
    }

    root->left = buildtreeusinginpre(s, k - 1);
    root->right = buildtreeusinginpre(k + 1, e);
    return root;
}
int main()
{
    // node*root=buildtreelevelwise();//300
    int n = sizeof(preo) / sizeof(int);
    node *root = buildtreeusinginpre(0, n - 1);
    cout << "height is " << heightoftree(root) << endl;

    //  cout<<"count of nodes are "<<countofnodes(root)<<endl;

    // cout<<"sum of nodes are "<<sumofnodes(root)<<endl;
    // int key;
    // cin>>key;
    // if(searchinaBT(root,key)==true){
    // 	cout<<"key is present"<<endl;

    // }
    // else{
    // 	cout<<"key is not present"<<endl;

    // }
    // cout<<"pre order is : ";
    // preorder(root);
    // cout<<endl;
    // cout<<"in order is : ";
    // inorder(root);
    // cout<<endl;
    // cout<<"post order is : ";
    // postorder(root);
    // cout<<endl;

    // cout<<"Level wise print is:"<<endl;
    // levelwiseprint(root);
    // // cout<<"Diameter is "<<fastdiameter(root).dia<<endl;
    return 0;
}