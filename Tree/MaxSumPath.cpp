#include<bits/stdc++.h>
using namespace std;

int maxsum = INT_MIN;

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

int MaxSumPath(node*root)
{
    if(root == NULL) return 0;

    int leftsum = MaxSumPath(root->left);
    int rightsum = MaxSumPath(root->right);

    int nodemax = max(max(root->data, root->data + leftsum + rightsum), max(root->data + leftsum, root->data + rightsum));

    maxsum = max(maxsum, nodemax);
    int singlePath = max(root->data ,max(root->data + leftsum, root->data + rightsum));
    
    return singlePath;
}

int main()
{
        node*root = new node(1);
        root->left = new node(-12);
        root->left->left = new node(4);
        root->right = new node(3);
        root->right->left = new node(5);
        root->right->right = new node(-6);

    cout<<MaxSumPath(root)<<endl;

    return 0;
}