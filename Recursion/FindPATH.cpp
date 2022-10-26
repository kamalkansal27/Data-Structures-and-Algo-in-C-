// To find the number of path to go from starting pos to the ending postion.
#include<bits/stdc++.h>
using namespace std;

int count(int s, int e)
{
    if(s == e) return 1;
    if(s > e) return 0;

    int ans = 0;
    for(int i=1;i<=6;i++)
    {
        ans += count(s+i,e);
    }
    return ans;
}

int main()
{
    cout<<count(0,3)<<endl;
    return 0;
}