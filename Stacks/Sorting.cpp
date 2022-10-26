// To sort the Stack using Recursion.
#include<bits/stdc++.h>
using namespace std;

void SortedInsert(stack<int> &st, int element)
{
    if(st.empty() || element > st.top())
    {
        st.push(element);
        return;
    } 

    int popped = st.top();
    st.pop();

    SortedInsert(st, element);
    st.push(popped);
}

void Sort(stack<int> &st)
{
    if(st.empty()) return;

    int popped = st.top();
    st.pop();

    // Recursive call
    Sort(st);

    SortedInsert(st, popped);
}

int main()
{
    stack<int> st;
    st.push(3);
    st.push(-7);
    st.push(9);
    st.push(-2);
    st.push(5);
    
    Sort(st);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}