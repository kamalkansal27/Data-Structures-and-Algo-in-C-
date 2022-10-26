#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans = n;
        cout<<"2"<<endl;
        for(int i=1;i<=n-1;i++){
            cout<<n-i<<" "<<ans<<endl;
            ans = ((n-i)+ans);
            if(ans % 2 != 0){
                ans++;
                ans = ans/2;
            }
            else{
                ans = ans/2;
            }
        }
    }

    return 0;
}