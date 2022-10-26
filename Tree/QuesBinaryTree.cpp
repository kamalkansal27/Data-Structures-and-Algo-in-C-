// Ques1 - Find the sum of all nodes and count the number of the nodes in the given binary tree.
// Ques2 - Height ?

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

int CountNodes(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return CountNodes(root->left) + CountNodes(root->right) + 1;
}

int SumNodes(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    return root->data + SumNodes(root->left) + SumNodes(root->right);
}

int CalcHieght(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left_hieght = CalcHieght(root->left);
    int right_hieght = CalcHieght(root->right);

    return max(left_hieght, right_hieght) + 1;
}

int CalcDiametre(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    
    int left_Hieght = CalcHieght(root->left);
    int right_Hieght = CalcHieght(root->right);
    int currdiametre = left_Hieght + right_Hieght + 1;

    int left_diametre = CalcDiametre(root->left);
    int right_diametre = CalcDiametre(root->right);

    return max(currdiametre, max(left_diametre, right_diametre));
    
}

int sumnodes(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int sum = root->data + sumnodes(root->left) + sumnodes(root->right);
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

    // count
    cout<<sumnodes(root)<<endl;
    // Sum
    // cout<<SumNodes(root)<<endl;
    // height
    // cout<<CalcHieght(root)<<endl;
    // diametre
    cout<<CalcDiametre(root)<<endl;

    return 0;
}*/

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

int sumReplace(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int left_sum = sumReplace(root->left);
    int right_sum = sumReplace(root->right);

    root->data = left_sum + right_sum + root->data;
    return root->data;
}

void PrintPreorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    PrintPreorder(root->left);
    PrintPreorder(root->right);
}

int hieght(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left_hieght = hieght(root->left);
    int right_hieght = hieght(root->right);

    return max(left_hieght, right_hieght) + 1;
}

bool IfBalancedBT(node* root)
{
    if(root == NULL)
    {
        return true;
    }

    if(IfBalancedBT(root->left) == true)
    {
        return true;
    }
    if(IfBalancedBT(root->right) == true)
    {
        return false;
    }
    int left_hieght = hieght(root->left);
    int right_hieght = hieght(root->right);

    if(abs(left_hieght - right_hieght) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Rightview(node* root)
{
    if(root == NULL)
    {
        return;
    }
    
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();
        for(int i=1;i<n;i++)
        {
            node* curr = q.front();
            q.pop();
            if(i == n-1)
            {
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}

void leftview(node* root)
{
    if(root == NULL)
    {
        return;
    }
    queue<node*> b;
    b.push(root);

    while(!b.empty())
    {
        int n = b.size();
        for(int i=0;i<n;i++)
        {
            node* curr = b.front();
            b.pop();
            if(i == 0)
            {
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL)
            {
                b.push(curr->left);
            }
            if(curr->right != NULL)
            {
                b.push(curr->right);
            }
        }
    }
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

    // PrintPreorder(root);
    // sumReplace(root);
    // cout<<endl;
     PrintPreorder(root);
     cout<<endl;

    // if(IfBalancedBT(root))
    // {
    //     cout<<"Balanced Binary Tree"<<endl;
    // }
    // else
    // {
    //     cout<<"UnBalanced Binary Tree"<<endl;
    // }

    // Rightview(root);
    leftview(root);
    return 0;
}*/ 