#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    pair<int, int> arr[n];
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;

        arr[0] = make_pair(x,y);
    }

    int k; 
    cin>>k;

    priority_queue<pair<int, pair<int, int>>> maxHeap;

    for(int i=0;i<n;i++)
    {
        int x = arr[i].first;
        int y = arr[i].second;

        int dis = x*x + y*y;
        maxHeap.push(make_pair(dis, make_pair(x, y)));

        if(maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }

    while(!maxHeap.empty())
    {
        cout<<maxHeap.top().second.first<<", "<<maxHeap.top().second.second<<endl;
        maxHeap.pop();
    }

    return 0;

}