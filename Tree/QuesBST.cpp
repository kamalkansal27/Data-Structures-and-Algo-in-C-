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

bool ifIdenticalBST(node* root1, node* root2)
{
    if(root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if(root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else
    {
        /*if(root1->data == root2->data)
        {
            bool leftsubtree = ifIdenticalBST(root1->left, root2->left);
            if(leftsubtree)
            {
                bool rightsubtree = ifIdenticalBST(root1->right, root2->right);
                if(rightsubtree)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }        
        }
        else
        {
            return false;
        }*/

        bool cond1 = root1->data == root2->data;
        bool cond2 = ifIdenticalBST(root1->left, root2->left);
        bool cond3 = ifIdenticalBST(root1->right, root2->right);

        if(cond1 && cond2 && cond3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    node* root1 = new node(1);
    root1->right = new node(3);
    root1->right->left = new node(2);
    root1->right->right = new node(5);

    node* root2 = new node(1);
    root2->right = new node(3);
    root2->right->left = new node(2);
    // root2->right->right = new node(5);

    if(ifIdenticalBST)
    {
        cout<< "BST's are Identical."<<endl;
    }
    else
    {
        cout<< "BST's are Non Identical."<<endl;
    }

    return 0;
}