
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, l, r, x, a, b, i, j;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>l>>r>>x;
        
        cin>>a>>b;
        
        if(a==b){
            cout<<"0\n";
        }else if(a<b){
            if(b-a>=x){
                cout<<"1\n";
            }else{
                if(a-l>=x){
                    cout<<"2\n";
                }else if(r-b>=x){
                    cout<<"2\n";
                }else if(r-a>=x && b-l>=x){
                    cout<<"3\n";
                }else{
                    cout<<"-1\n";
                }
            }
        }else{
            if(a-b>=x){
                cout<<"1\n";
            }else if(b-l>=x){
                cout<<"2\n";
            }else if(r-a>=x){
                cout<<"2\n";
            }else if(a-l>=x && r-b>=x){
                cout<<"3\n";
            }else{
                cout<<"-1\n";
            }
        }
    }
}