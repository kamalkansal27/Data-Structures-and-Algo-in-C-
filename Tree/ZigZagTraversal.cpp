// ZigZag Traversal in BST.
/*
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

void zigzagTraversal(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    stack<node*> currlevel;
    stack<node*> nextlevel;

    bool LeftToRight = true;
    currlevel.push(root);

    while(!currlevel.empty())
    {
        node* temp = currlevel.top();
        currlevel.pop();

        if(temp)
        {
            cout<< root->data <<" ";

            if(LeftToRight)
            {
                if(temp->left)
                {
                    nextlevel.push(temp->left);
                }
                if(temp->right)
                {
                    nextlevel.push(temp->right);
                }
            }
            else
            {
                if(temp->right)
                {
                    nextlevel.push(temp->right);
                }
                if(temp->left)
                {
                    nextlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty())
        {
            LeftToRight = !LeftToRight;
            swap(currlevel, nextlevel);
        }
    }
}

int main()
{
    node* root = new node(12);
    root->left = new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->left->right = new node(10);

    zigzagTraversal(root);
    cout<<endl;

    return 0;
}*/

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

void ZigZag(node* root)
{
    if(root == NULL) return;

    queue<node*> q;
    q.push(root);

    bool LeftToRight = true;

    while(!q.empty())
    {
        node* temp = q.front();
        cout<<temp->data<<" ";

        q.pop();

        if(LeftToRight)
        {
            if(temp->right)
            {
                q.push(temp->right);
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
        }
        else
        {
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    
        LeftToRight = !LeftToRight;
    }

}

int main()
{
    node* root = new node(12);
    root->left = new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->right->right = new node(10);

    ZigZag(root);
    cout<<endl;

    return 0;

    return 0;
}