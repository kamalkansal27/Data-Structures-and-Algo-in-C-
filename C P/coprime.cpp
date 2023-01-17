#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if((a%b)==0)
    {
        return b;
    }else{
        return gcd(b, a%b);
    }
}
int main()
{
    ll t, n, ans, i, j;
    
    cin>>t;
    
    for(;t--;)
    {
        
        ll c[1001];
        
        ans=-1;
        
        for(i=0; i<=1000; i++){
            c[i]=-1;
        }
        
        cin>>n;
        
        for(i=1;i<=n;i++)
        {
            cin>>j;
            c[j]=i;
        }
        
        for(i=1; i<=1000; i++)
        {
            for(j=i; j<=1000; j++)
            {
                if(c[i]>0 && c[j]>0)
                {
                    if(gcd(i, j)==1){
                        ans=max(ans, c[i]+c[j]);
                    }
                }
            }
        }
        
        cout<<ans<<"\n";
    }
}