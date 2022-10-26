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
void PrintLevelOrderBT(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* front = q.front();
        q.pop();
        if(front != NULL)
        {
            cout<<front->data<<endl;
            if(front->left)
            {
                q.push(front->left);
            }
            if(front->right)
            {
                q.push(front->right);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
    
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    PrintLevelOrderBT(root);

    return 0;
}*/

//  *********************************SUM AT Kth LEVEL********************************
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

int sumAtKlevel(node* root, int k)
{
    if(root == NULL)
    {
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    int level = 0, sum = 0;

    while(!q.empty())
    {
        node* front = q.front();
        q.pop();
        if(front != NULL)
        {
            if(level == k)
            {
                sum += front->data;
            }
            if(front->left)
            {
                q.push(front->left);
            }
            if(front->right)
            {
                q.push(front->right);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<sumAtKlevel(root, 2)<<endl;

    return 0;
}