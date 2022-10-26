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

node* InsertBST(node* root, int val)
{
    if(root == NULL)
    {
        return new node(val);
    }
    if(val < root->data)
    {
        root->left = InsertBST(root->left, val);
    }
    else
    {
        root->right = InsertBST(root->right, val);
    }
    return root;
}

void Printinorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    Printinorder(root->left);
    cout<<root->data<<" ";
    Printinorder(root->right);
}

int main()
{
    node* root = NULL;
    root = InsertBST(root, 5);
    InsertBST(root, 1);
    InsertBST(root, 3);
    InsertBST(root, 4);
    InsertBST(root, 2);
    InsertBST(root, 7);

    // Printinorder(root);
    return 0;
}*/

// Search in BST.
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

node* SearchInBST(node* root, int key)
{
    if(root == NULL)
    {
        return NULL;
    } 
    if(root->data == key)
    {
        return root;
    }
    if(root->data < key)
    {
        return SearchInBST(root, key);
    }
    return SearchInBST(root, key);
}

int main()
{
    node* root = new node(4);
    root->left = new  node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);

    if(SearchInBST(root, 5) == NULL){
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl; 
    }

    return 0;
}*/

// Delete in BST.
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
// delete in BST

node* Deletion(node* root, int key)
{

    if(root == NULL)
    {
        return NULL;
    }

    if(root->data == key)
    {
        // To delete a leaf node.
        if(root->left == NULL && root->right == NULL)
        {
            node* todelete = root;
            delete todelete;
        }
        // To delete a node having a single child.
        if(root->left != NULL && root->right == NULL || root->left == NULL && root->right != NULL)
        {
            node* temp = root;
            if(root->left != NULL)
            {
                root = root->left;
            }
            else
            {
                root = root->right;
            }
            delete temp;
        }
        // To delete a node havind two children.
        if(root->left != NULL && root->right != NULL)
        {
            node* temp = root;
            root = root->right;
            root->right = temp;
            Deletion(root->right, key);   
        }
        return root;
    }
    if(root->data < key)
    {
        return Deletion(root->right, key);
    }
    return Deletion(root->left, key);
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
    node* root = new node(4);
    root->left = new  node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);

    PrintInorder(root);
    cout<<endl;
    Deletion(root, 5);
    PrintInorder(root);
    cout<<endl;
    return 0;
}