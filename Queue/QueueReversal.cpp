#include<bits/stdc++.h>
using namespace std;

queue<int> Reverse(queue<int> q)
{
    stack<int> st;

    while(!q.empty())
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

    return q;
}



int main()
{
    queue<int> q;

    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    queue<int> ans;
    ans = Reverse(q);
    
    while(!ans.empty())
    {
        cout<<ans.front()<<endl;
        ans.pop();
    }

    return 0;
}