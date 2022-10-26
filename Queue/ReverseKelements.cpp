// To Reverse the First K elements of the Queue.
#include<bits/stdc++.h>
using namespace std;

queue<int> ReverseKelement(queue<int> q, int k)
{
    stack<int> st;
    int n = q.size();

    for(int i=0;i<k;i++)
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while(!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }

    for(int i=1;i<=n-k;i++)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;
}

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    queue<int> ans;
    ans = ReverseKelement(q,3);
    
    while(!ans.empty())
    {
        cout<<ans.front()<<endl;
        ans.pop();
    }

    return 0;
}