#include<bits/stdc++.h>
using namespace std;

// Indian Coin Change.
int main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }

    int val;
    cin>>val;

    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        ans +=  val/a[i];
        val -= (val/a[i])* a[i];
    }

    cout<<ans<<endl;

    return 0;
}