// Vectors are the Dynamic arrays, we don't need to declare any size to them.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Different Ways to Traverse the Array.
    // 1st Way.
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // 2nd Way.
    vector<int> :: iterator it;
    for(it = v.begin();it != v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // 3rd Way.
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
 