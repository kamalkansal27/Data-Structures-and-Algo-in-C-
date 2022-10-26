// To Print all the Nodes present at the distance k from the target node.
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
// CASE - 1
void PrintSubTreeNodes(node* root, int k)
{
    if(root == NULL || k <=0) return ;

    if(k == 0)
    {
        cout<<root->data<<" ";
        return ;
    }

    PrintSubTreeNodes(root->left, k-1);
    PrintSubTreeNodes(root->right, k-1);
}

// CASE-2
int PrintNodesatK(node* root, node* target, int k)
{
    if(root == NULL) return -1;

    if(root == target)
    {
        PrintSubTreeNodes(root, k);
        return 0;
    }

    int dl = PrintNodesatK(root->left, target, k);
    if(dl != -1)
    {
        if(dl+1 == k) cout<<root->data<<" ";
        else 
        {
            PrintSubTreeNodes(root->right, k-dl-2);
        }
        return 1+dl;
    }

    int dr = PrintNodesatK(root->right, target, k);
    if(dr != -1)
    {
        if(dr+1 == k) cout<<root->data<<" ";
        else 
        {
            PrintSubTreeNodes(root->left, k-dr-2);
        }
        return 1+dr;
    }

    return -1;
}

int main()
{
    node* root = new node(1);
    root->left = new node(5);
    root->left->left = new node(6);
    root->left->left->right = new node(7);
    root->left->left->right->left = new node(8);
    root->left->left->right->right = new node(9);
    root->right = new node(2);
    root->right->left= new node(3);
    root->right->right = new node(4);

    PrintNodesatK(root, root->left , 3);

    return 0;
}