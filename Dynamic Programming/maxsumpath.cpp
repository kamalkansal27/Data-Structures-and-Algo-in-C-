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
    // Base condition.
    if(root == NULL){
        return 0;
    }
    // hypothesis.
    int left = solve(root->left, res);
    int right = solve(root->right, res);
    // Induction.
    int temp = max(max(left, right) + root->data, root->data);
    int ans = max(temp, root->data + left + right);
    res = max(res, ans);

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