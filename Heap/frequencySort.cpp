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

    unordered_map<int, int> freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    priority_queue<pair<int, int>> maxHeap;
    for(int i=0;i<n;i++)
    {
        maxHeap.push(make_pair(freq[arr[i]], arr[i]));
    }
    while(!maxHeap.empty())
    {
        cout<<maxHeap.top().second<<" ";
        maxHeap.pop();
    }
    cout<<endl;

    return 0;
}