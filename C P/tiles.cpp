#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, cost, m, last, l;
    string a;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>a;
        
        n=a.size();
        vector<ll> indexes[26];
        vector<ll> ans;
        m=0;
        
        
        for(i=0; i<n; i++){
            indexes[a[i]-97].push_back(i+1);
        }
        
        cost=abs(a[0]-a[n-1]);
        if(a[n-1]>a[0]){
            for(i=a[0]-97; i<=a[n-1]-97; i++)
            {
                l=indexes[i].size();
                m=m+l;
                
                for(j=0; j<l; j++){
                    ans.push_back(indexes[i][j]);
                }
                
                
            }
        }else{
            for(i=a[0]-97; i>=a[n-1]-97; i--)
            {
                l=indexes[i].size();
                m=m+l;
                
                for(j=0; j<l; j++){
                    ans.push_back(indexes[i][j]);
                }
                
                
                
            }
        }
        
        cout<<cost<<" "<<m<<"\n";
        
        
        for(i=0; i<m; i++){
            cout<<ans[i]<<" ";
        }
        
        cout<<"\n";
        
    }
}