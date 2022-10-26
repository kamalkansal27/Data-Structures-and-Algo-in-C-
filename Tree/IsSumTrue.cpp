// To check for every node if the sum of the left subtree and sum of right subtree is equal to that particular node.

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

pair<bool, int> IsSumTrue(node* root)
{
    if(root == NULL) 
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    if(root->left == NULL && root->right == NULL) 
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> left = IsSumTrue(root->left);
    pair<bool, int> right = IsSumTrue(root->right);

    bool sum = left.second + right.second == root->data;

    pair<bool, int> ans;
    if(left.first && right.first && sum)
    {
        ans.first = true;
        ans.second = root->data + left.second + right.second;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

int main()
{
    node* root = new node(3);
    root->left = new node(2);
    root->right = new node(10);

    if(IsSumTrue(root).first) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}