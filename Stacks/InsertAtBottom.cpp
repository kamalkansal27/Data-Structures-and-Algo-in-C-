// To insert an given element at the bottom of the stack.

#include<bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int> &st, int element)
{
    if(st.empty())
    {
        st.push(element);
        return;
    }

    int popped = st.top();
    st.pop();

    InsertAtBottom(st, element);
    st.push(popped);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    InsertAtBottom(st, 10);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}