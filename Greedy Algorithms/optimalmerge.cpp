#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    int cost = a[0] + a[1];
    int tempadd = cost;

    for(int i=2;i<n;i++){
        tempadd+= a[i];
        cost += tempadd;
    }
    cout<<cost<<endl;

    return 0;
}