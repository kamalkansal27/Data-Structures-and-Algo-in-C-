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

    int cost = 0;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i=0;i<n;i++)
    {
        minHeap.push(arr[i]);
    }

    while(minHeap.size() != 1)
    {
        int rope1 = minHeap.top();
        minHeap.pop();
        int rope2 = minHeap.top();
        minHeap.pop();

        int rope = rope1 + rope2;
        cost += rope;

        minHeap.push(rope);
    }

    cout<<cost<<endl;

    return 0;
}