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
int search(int inorder[], int curr, int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node* BuildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if(start>end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;  
    node* Node = new node(curr);
    if(start == end)
    {
        return Node;
    }
    
    int pos = search(inorder, curr, start, end);
    Node->left = BuildTree(preorder, inorder, start, pos-1);
    Node->right = BuildTree(preorder, inorder, pos+1, end);  

    return Node; 
}
void PrintInorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    PrintInorder(root->left);
    cout<<root->data<<" ";
    PrintInorder(root->right);
}

int main()
{

    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node* root = BuildTree(preorder, inorder, 0, 4);
    PrintInorder(root);
    return 0;
}

/*#include<bits/stdc++.h>
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

int search(int inorder[], int start, int end, int val)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

node* Buildtree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if(start > end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;

    node* curr = new node(val);
    if(start == end)
    {
        return curr;
    }
    int pos = search(inorder, start, end, val);
    curr->right = Buildtree(postorder, inorder, pos + 1, end);
    curr->left = Buildtree(postorder, inorder, start, pos-1);

    return curr;

}
void inorderprint(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    inorderprint(root->left);
    cout<<root->data<<endl;
    inorderprint(root->right);
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    node* root = Buildtree(postorder, inorder, 0, 4);
    inorderprint(root);

    return 0;
}*/