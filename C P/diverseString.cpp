
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,ans, n, i, j, t1, l, maxf;
    string a;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        cin>>a;
        ans=0;
        
        ll c[10], dis=0;
        
        for(i=0; i<n; i++)
        {
            for(j=0; j<=9; j++){
                c[j]=0;
            }
            maxf=0;
            dis=0;
            
            for(j=i; j<=i+99 && j<n; j++)
            {
                c[a[j]-'0']++;
                maxf=max(maxf, c[a[j]-'0']);
                if(c[a[j]-'0']==1){
                    dis++;
                }
                
                if(dis>=maxf)
                ans++;
            }
        }
        
        cout<<ans<<"\n";
    }
}