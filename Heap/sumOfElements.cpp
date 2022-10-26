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

    int k1, k2;
    cin>>k1>>k2;

    int sum = 0;
    priority_queue<int> maxHeap;

    for(int i=0;i<n;i++)
    {
        maxHeap.push(arr[i]);
        int upper = max(k2,k1);
        int lower = min(k2,k1);
        if(maxHeap.size() == upper)
        {
            maxHeap.pop();
            while(maxHeap.size() != lower)
            {
                sum += maxHeap.top();
                maxHeap.pop();
            }
            break;
        }
    }

    cout<<sum<<endl;

    return 0;
}