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

int hieght(node* root)
{
    if(root == NULL) return 0;

    int lefthieght = hieght(root->left);
    int righthieght = hieght(root->right);

    return max(lefthieght, righthieght) + 1;
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

    cout<<hieght(root)<<endl;

    return 0;
}