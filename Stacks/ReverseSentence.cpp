#include<bits/stdc++.h>
using namespace std;

void Reverse(string s)
{
    stack<string> st;
    
    for(int i=0;i<s.length();i++) // Pushing the words into the stack.
    {
        string temp = "";
        while(s[i] != ' ' && i < s.length())
        {
            temp += s[i];
            i++;
        }
        st.push(temp);
    }

    while(!st.empty())  // Printing the string in reverse and poping out the words.
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main()
{
    string s;
    cout<<"Enter the Sentence : ";
    getline(cin , s);
    
    Reverse(s);

    return 0;
}