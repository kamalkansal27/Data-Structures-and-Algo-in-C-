#include<bits/stdc++.h>
using namespace std;

void solve(int n, int type[], long long int &mxChoco){
    for(int i=n-1;i>0;i--){
        mxChoco += type[i];
        if(type[i] <= type[i-1]){
            type[i-1] = type[i]-1;
            if(type[i-1] < 0) type[i-1] = 0;
        }
    }
    mxChoco += type[0];
}

int main()
{
    int n;
    cin>>n;

    int type[n];
    for(int i=0;i<n;i++){
        cin>>type[i];
    }

    long long int mxChoco = 0;
    solve(n, type, mxChoco);
    cout<<mxChoco<<endl;

    return 0;
}