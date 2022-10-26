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
bool IsBalanced(node* root)
{
    if(root == NULL) return true;

    bool left = IsBalanced(root->left);
    bool right = IsBalanced(root->right);
    bool diff = abs(hieght(root->left) - hieght(root->right) <= 1);

    if(left && right && diff) return true;

    return false;
}

// Complexity = O(n)
pair<bool, int> IsbalancedFast(node* root)
{
    if(root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> left = IsbalancedFast(root->left);
    pair<bool, int> right = IsbalancedFast(root->right);

    bool leftans = left.first;
    bool rightans = right.first;

    bool diff = abs(left.second - right.second <= 1);

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) +1;

    if(leftans && rightans && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }

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

    if(IsBalanced(root)) cout<<"Balanced Binary Tree."<<endl;
    else cout<<"Non Balanced Binary Tree."<<endl;

    IsbalancedFast(root);

    return 0;
}