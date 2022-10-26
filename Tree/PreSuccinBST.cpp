// We need to find the predecessor or sucessor of the particular node in BST.
// Predecessor - Element which come pehle from that given node in inorder traversal.
// Successor - Element which come baad mae from that given node in inorder traversal

#include<bits/stdc++.h>
using namespace std;

vector<int> inorder;

class node{

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

void Inorder(node* root)
{
    if(root == NULL) return;

    Inorder(root->left);
    inorder.push_back(root->data);
    Inorder(root->right);
}

int main()
{
    node*root = new node(5);
    root->left = new node(4);
    root->left->left = new node(3);
    root->right = new node(8);
    root->right->left = new node(6);
    root->right->right = new node(9);

    Inorder(root);
    for(int i=0;i<inorder.size();i++)
    {
        cout<<inorder[i]<<" ";
    }
    cout<<endl;

        

    return 0;
}