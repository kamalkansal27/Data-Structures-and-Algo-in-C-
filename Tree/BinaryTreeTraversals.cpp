#include<bits/stdc++.h>
using namespace std;

class node
{
    public:

    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void PreorderTraversal(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}
void InOrderTraversal(node* root)
{
    if(root == NULL)
    {
        return;
    }

    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}
void PostOrderTraversal(node* root)
{
    if(root == NULL)
    {
       return ;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{   
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right =  new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    PreorderTraversal(root);
    cout<<endl;
    InOrderTraversal(root);
    cout<<endl;
    PostOrderTraversal(root);
    cout<<endl;



    return 0;
}