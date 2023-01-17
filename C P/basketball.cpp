#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, d;
    cin>>n>>d;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);
    int totalPlayer = n;
    int win = 0;
    for(int i=n-1;i>=0;i--){
        int ReqPlayer = (d/arr[i]) + 1;
        if(ReqPlayer <= totalPlayer){
            totalPlayer -= ReqPlayer;
            win++;
        }
        else{
            break;
        }
    }

    cout<<win<<endl;

    return 0;
}