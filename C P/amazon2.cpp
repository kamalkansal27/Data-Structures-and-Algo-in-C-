#include<bits/stdc++.h>
using namespace std;
int solve(int awards[], int k, int n){
    sort(awards, awards+n);
    int idx = 0;
    int groups = 1;
    for(int i=1;i<n;i++){
        if(awards[i] - awards[idx] > k){
            groups++;
            idx = i;
        }
    }
    return groups;
}
int main()
{
    int n;
    cin>>n;

    int awards[n];
    for(int i=0;i<n;i++){
        cin>>awards[i];
    }

    int k;
    cin>>k;

    cout<<solve(awards, k, n)<<endl;
    return 0;
}