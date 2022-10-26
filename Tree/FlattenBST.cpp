// We need to flatten a BST to a sorted linked list.
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

void InorderTraversal(node* root, vector<node*> &inorder)
{
    if(root == NULL) return ;

    InorderTraversal(root->left, inorder);
    inorder.push_back(root);
    InorderTraversal(root->right, inorder);
}

node* flattenBST(node* root)
{
    vector<node*> inorder;
    InorderTraversal(root, inorder);

    int i=0;
    node* ans = inorder[i];
    while(i != inorder.size()-1)
    {
        inorder[i]->left = NULL;
        inorder[i]->right = inorder[i+1];
        i++;
    }
    inorder[i]->left = NULL;
    inorder[i]->right = NULL;

    return ans;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->right;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(6);
    root->left->left= new node(1);
    root->left->right = new node(3);
    root->right->left = new node(5);
    root->right->right = new node(7);

    node* head = flattenBST(root);
    display(head);

    return 0;
}