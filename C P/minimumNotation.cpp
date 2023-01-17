
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j;
    string a;
    cin>>t;
    
    for(;t--;){
        
        cin>>a;
        n=a.size();
        
        char s;
        
        s=a[n-1];
        
        for(i=n-2; i>=0; i--)
        {
            if(a[i]>s){
                if(a[i]!='9')
                a[i]=char(int(a[i])+1);
            }else{
                s=a[i];
            }
        }
        
        
        
        sort(a.begin(), a.end());
        
        cout<<a<<"\n";
    }
}

