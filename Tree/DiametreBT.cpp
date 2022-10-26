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

// Complexity = O(n^2)
int diametre(node*root)
{
    if(root == NULL) return 0;

    int op1 = diametre(root->left);
    int op2 = diametre(root->right);
    int op3 = hieght(root->left) + hieght(root->right) + 1;

    return max(op1,max(op2,op3));
}

// Complexity = O(n)
pair<int,int> diameterFast(node* root)
{
    if(root == NULL)
    {
        pair<int, int> p = make_pair(0,0);
        return p;
    }

    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
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

    cout<<diametre(root)<<endl;

    return 0;
}