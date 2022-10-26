// Given an array, you need to find the First negative interger in the window of size k.
#include<bits/stdc++.h>
using namespace std;

vector<long long int> FirstNegativeInt(long long int A[], long long int N, long long int K)
{
    deque<long long int> dq;
    vector<long long int> ans;

    // Process the first k elements
    for(int i=0;i<K;i++)
    {
        if(A[i] < 0) 
        {
            dq.push_back(i);
        }
    }
    // Store in answer
    if(dq.size() > 0)
    {
        ans.push_back(A[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }
    // Process for the Remaining Windows
    for(int i=K;i<N;i++)
    {
        // Remove
        if(!dq.empty() && i - dq.front() <= K)
        {
            dq.pop_front();
        }
        // Addition
        if(A[i] < 0)
        {
            dq.push_back(i)
        }
        // Store answer
        if(dq.size() > 0)
        {
        ans.push_back(A[dq.front()]);
        }
        else
        {
        ans.push_back(0);
        }
    }
    return ans;
}

int main()
{
    return 0;
}