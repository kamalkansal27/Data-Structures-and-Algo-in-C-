#include<bits/stdc++.h>
using namespace std;

 bool isValid(string s) 
    {
        if(s.size() == 1) return false;
        
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '['|| s[i] == '{')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(!st.empty() and st.top() == '(') st.pop();
                else return false;
            }
            else if(s[i] == ']')
            {
                if(!st.empty() and st.top() == '[') st.pop();
                else return false;
            }
            else if(s[i] == '}')
            {
                if(!st.empty() and st.top() == '{') st.pop();
                else return false;
            } 
        }
        if(!st.empty()) return false;
        return true;
    }

int main()
{
    cout<<isValid("{[()]}")<<endl;

    return 0;
}