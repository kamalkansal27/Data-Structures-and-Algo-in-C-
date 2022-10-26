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

node* BuildHeap(int arr[], int n)
{
    node* root = new node(arr[0]);
    int ptr = 1;
    while(ptr < n)
    {
        int par = ptr/2;
        if(arr[ptr] > arr[par])
        {
            // 
        }
    }
}

int main()
{
    return 0;
}