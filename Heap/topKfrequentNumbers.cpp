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

    map<int, int> freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    
    // map<int, int> :: iterator it;
    // for(it = freq.begin();it != freq.end();it++)
    // {
    //     cout<<it->first<<" - "<<it->second<<endl;
    // }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    
    for(auto i : freq)
    {
        minHeap.push(make_pair(i.second, i.first));
        if(minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    while(!minHeap.empty())
    {
        cout<<minHeap.top().second<<" ";
        minHeap.pop();
    }
    cout<<endl;

    return 0;
}