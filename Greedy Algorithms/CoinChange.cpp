// To find the minimum number of coins to get the total n.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    // array should always be sorted.
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int r;
    cin>>r;

    sort(arr.begin(), arr.end(), greater<int>());

    int coins = 0;
    for(int i=0;i<n;i++){
        if(r >= arr[i]){
            coins += r / arr[i];
            r -= (r/arr[i] * arr[i]);
        }
    }
    cout<<coins<<endl;

    return 0;
}