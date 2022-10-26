#include<bits/stdc++.h>
using namespace std;

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

    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i=0;i<n;i++)
    {
        minHeap.push(arr[i]);
        if(minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    while(!minHeap.empty())
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;

    return 0;
}