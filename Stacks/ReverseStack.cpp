#include<bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int> &st, int element)
{
    if(st.empty())
    {
        st.push(element);
        return;
    }

    int poppedelement = st.top();
    st.pop();
    InsertAtBottom(st, element);
    st.push(poppedelement);
}

void Reverse(stack<int> &st)
{
    if(st.empty()) return;

    int element = st.top();
    st.pop();
    Reverse(st);

    InsertAtBottom(st, element);
}

int main()
{
    stack<int> st;
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        st.push(element);
    }
    
    Reverse(st);
    for(int i=0;i<5;i++)
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}