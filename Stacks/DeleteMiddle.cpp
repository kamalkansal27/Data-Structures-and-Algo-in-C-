// To Delete the middle element of the stacks.

#include<bits/stdc++.h>
using namespace std;

void Delete(stack<int> &st, int count, int size)
{
    if(count == size/ 2)
    {
        st.pop();
        return ;
    }
    int popped = st.top();
    st.pop();
    Delete(st, count + 1, size);
    st.push(popped);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // st.push(5);

    int size = st.size();
    Delete(st, 0, size);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}