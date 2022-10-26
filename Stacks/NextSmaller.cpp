// To Print the Smaller element of every number in the array.

#include<bits/stdc++.h>
using namespace std;

vector<int> NextSmaller(vector<int> arr)
{
    vector<int> ans;

    stack<int> st;
    st.push(-1);

    for(int i=arr.size()-1;i>=0;i--)
    {
        int curr = arr[i];
        if(st.top() < curr)
        
            ans.push_back(st.top());
            st.push(curr);
        }
        else
        {
            while(st.top() < curr)
            {
                st.pop();
            }
            if(st.top() < curr)
            {
                ans.push_back(st.top());
            }
        }
    }
}

int main()
{
    cout<<NextSmaller({2,1,4,3})<<endl;

    return 0;
}