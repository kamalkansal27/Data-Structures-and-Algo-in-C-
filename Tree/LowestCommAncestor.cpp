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

bool getpath(node* root, int n1, vector<int> &path)
{
    if(root == NULL) return false;

    path.push_back(root->data);
    if(root->data == n1) return true;

    if(getpath(root->left, n1, path) || getpath(root->right, n1, path)) return true;

    path.pop_back();
    return false;
}

int LCA(node* root, int n1, int n2)
{
    vector<int> path1, path2;

    if(!getpath(root, n1, path1) || !getpath(root, n2, path2)) return -1;

    int i=0;
    while(path1.size() && path2.size())
    {
        if(path1[i] != path2[i])
        {
            break;
        }
        i++;
    }
    return path1[i-1];
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->right = new node(3);
    root->right->right = new node(6);
    root->right->left = new node(5);
    root->right->left->left = new node(2);

    int lca = LCA(root, 7, 6);
    if(lca  == -1) cout<<"LCA does not Exist."<<endl;
    else
    {
        cout<<"LCA : "<<lca<<endl;
    }

    return 0;
}