// we use two data structures for the purpose of hashing i.e, MAP and UNORDERED MAPS
// These both are derived from Standard Template Library.

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Map is a pair of key and value
    // Always remember that first int is for key and second int is for value.
    map<int,int> m;
    m[10] = 27; // This means that key '10' is having the value '27' along with it.
    cout<<m[10]<<endl;   

    return 0;
}*/

// Count the frequency of the elements in the given array.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> arr(n); 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map<int, int> freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]] ++;
    }

    map<int, int> :: iterator it;
    for(it = freq.begin();it != freq.end();it++)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }

    return 0;
}
// Ques2 - To print the vertical order of the Binary tree.

/*#include<bits/stdc++.h>
using namespace std;

class node
{
    public:

    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void GetVerticalOrder(int Hdis, node* root, map<int, vector<int>> m)
{
    if(root == NULL)
    {
        return;
    }

    m[Hdis].push_back(root->data);
    GetVerticalOrder(Hdis-1, root->left, m);
    GetVerticalOrder(Hdis+1, root->left, m);
}

int main()
{
    node* root = new node(10);
    root->left = new node(7);
    root->right = new node(4);
    root->left->right = new node(11);
    root->left->left = new node(3);
    root->right->right = new node(6);
    root->right->left = new node(14);

    map<int, vector<int>> m;

    GetVerticalOrder(0, root, m);
    map<int, vector<int>> :: iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
        for(int i=0;i<(it->second).size();i++)
        {
            cout<< (it->second)[i] << " ";
        }  
    }

    return 0;
}*/

/*int main()
{
    int n, k;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int s=0, ans = INT_MAX;
    for(int i=0;i<3;i++)
    {
        s = s + a[i];
    }

    ans = min(s, ans);
    // sliding window technique.

    for(int i=1;i<n-k+1;i++)
    {
        s -= a[i-1];
        s += a[i+k-1];
        ans = min(s, ans);
    }

    cout<<ans<<endl;

    return 0;
}*/
