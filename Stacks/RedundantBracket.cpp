// To find if the given expression is having the useless brackets or not.

#include<bits/stdc++.h>
using namespace std;

bool RedundantBracket(string s)
{
    if(s.size() == 0) return false;

    stack<int> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            st.push(s[i]);
        }
        if(s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            char popped = st.top();
            st.pop();

            if(popped != '+' && popped != '-' && popped != '*' && popped != '/' && popped != '^') return true;
            st.pop();
        }
    }
    return false;
}

int main()
{
    string s;
    cin>>s;

    if(RedundantBracket(s)) cout<<"Redundant Brackets."<<endl;
    else cout<<"Non Redundant Brackets."<<endl;

    return 0;
}