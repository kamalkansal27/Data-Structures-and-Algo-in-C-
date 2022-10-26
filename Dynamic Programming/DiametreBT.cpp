// To calculate the diametre of the binary tree.
#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int solve(node* root, int &res){
    // Base Condition.
    if(root == NULL){
        return 0;
    }
    // Hypothesis.
    int left = solve(root->left, res);
    int right = solve(root->right, res);
    // Induction.
    int temp = 1 + max(left, right);
    int ans = max(1+left+right, temp);
    res = max(ans, res);

    return temp;
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    int res = INT_MIN;
    solve(root, res);
    cout<<res<<endl;

    return 0;
}