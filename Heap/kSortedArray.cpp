#include<bits/stdc++.h>
using namespace std;

vector<int> kSorted(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        minHeap.push(arr[i]);
        if(minHeap.size() > k)
        {
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
    }   
    while(!minHeap.empty())
    {
        ans.push_back(minHeap.top());
        minHeap.pop();
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    vector<int> res = kSorted(arr, n, k);
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;

    return 0;
}