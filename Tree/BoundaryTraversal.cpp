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

void TraverseLeft(node* root, vector<int> &ans)
{
    // Base Case
    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL) return;

    ans.push_back(root->data);
        
}

vector<int> Boundary(node* root)
{
    vector<int> ans;
    if(root == NULL) return ans;

    ans.push_back(root->data);

    // Leftpart Traversal
    TraverseLeft(root->left, ans);
}

int main()
{
    return 0;
}