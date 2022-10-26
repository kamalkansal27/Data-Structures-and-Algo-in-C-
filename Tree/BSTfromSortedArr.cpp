#include<bits/stdc++.h>
using namespace std;

class node
{
    public:

    int data;
    node* left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* BuildBST(int arr[], int s, int e)
{
    if(s>e)
    {
        return NULL;
    }

    int mid = (s+e)/2;
    
    node* root = new node(arr[mid]);
    root->left = BuildBST(arr, s, mid-1);
    root->right = BuildBST(arr, mid+1, e);

    return root;
}
void Printpreorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Printpreorder(root->left);
    Printpreorder(root->right);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    node* root = BuildBST(arr, 0, 4);
    Printpreorder(root);
    cout<<endl;

    return 0;
}