// To find minimum number of operations in order to make a valid paranthesis from Invalid one.

#include<bits/stdc++.h>
using namespace std;

int MinOperations(string s)
{
    if(s.size() % 2 != 0) return -1;

    stack<int> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    int a = 0; int b = 0;
    while(!st.empty())
    {
        if(st.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
    }

    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}

int main()
{
    string s;
    cin>>s;

    cout<<MinOperations(s)<<endl;

    return 0;
}