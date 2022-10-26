#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int capacity = 0;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        
        int a, b;
        cin>>a>>b;

        capacity -= a;
        capacity += b;

        ans = max(ans, capacity);
    }

    cout<<ans<<endl;

    return 0;
}