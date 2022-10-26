#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    double r1 = (double) p1.first/p1.second;
    double r2 = (double) p2.first/p2.second;

    return r1>r2;
}

int main(){

    int n;
    cin>>n;

    vector<pair<int, int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }

    int w;
    cin>>w;

    sort(a.begin(), a.end(), compare);

    double ans = 0;
    for(int i=0;i<n;i++){
        if(a[i].second <= w){
            ans += a[i].first;
            w -= a[i].second;
        }
        else{
            ans += w * (double) a[i].first / a[i].second;
            break;
        }
    } 

    cout<<ans<<endl;

    return 0;
}