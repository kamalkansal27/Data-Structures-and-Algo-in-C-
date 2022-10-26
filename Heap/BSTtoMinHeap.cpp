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

vector<int> InorderTraversal(node* root)
{
    vector<int> inorder;
    if(root == NULL) return inorder;

    InorderTraversal(root->left);
    inorder.push_back(root->data);
    InorderTraversal(root->right);

    return inorder;
}

void fillPreorder(node* root, vector<int> inorder, int i)
{
    if(root == NULL) return;

    root->data = inorder[i];
    fillPreorder(root->left, inorder, i++);
    fillPreorder(root->right, inorder, i++);
}

void PreOrderTraversal(node* root)
{
    if(root == NULL) return ;

    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);

}

void BSTtoMInheap(node* root)
{
    if(root == NULL) return;

    vector<int> inorder = InorderTraversal(root);
    fillPreorder(root, inorder, 0);    
}

int main()
{
    node* root = new node(5);
    root->left = new node(4);
    root->right = new node(6);

    PreOrderTraversal(root);

    BSTtoMInheap(root);

    PreOrderTraversal(root);

    return 0;
}