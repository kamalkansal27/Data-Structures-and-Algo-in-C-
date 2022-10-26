#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int height[n];
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>height[i];
        maxi = max(maxi, height[i]);
    }

    cout<<maxi<<endl;

    return 0;

}
