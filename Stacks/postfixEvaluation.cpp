// "42*3+"
#include<bits/stdc++.h>
using namespace std;

int PostfixEvaluation(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] >= '0' && s[i] <='9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            
            case '-':
                st.push(operand1 - operand2);
                break;

            case '*':
                st.push(operand1 * operand2);
                break;

            case '/':
                st.push(operand1 / operand2);
                break;        

            } 
        }
    }
    return st.top();
}

int main()
{
    cout<<PostfixEvaluation("42*3+")<<endl;
    cout<<PostfixEvaluation("46+2/5*7+")<<endl;


    return 0;
}