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

    int x;
    cin>>x;

    int k;
    cin>>k;

    priority_queue<pair<int, int>> maxHeap;
    
    for(int i=0;i<n;i++)
    {
        int diff = abs(arr[i] - x);
        maxHeap.push(make_pair(diff, arr[i]));

        if(maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }  

    while(!maxHeap.empty())
    {
        cout<<maxHeap.top().second<<" ";
        maxHeap.pop();
    }
    cout<<endl;

    return 0;
}