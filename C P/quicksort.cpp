#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){

        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int equal = 0;
        int element = 1;

        for(int i=0;i<n;i++){
            if(element == arr[i]){
                equal++;
                element++;
            }
        }

        int x = n - equal;
        if(x % k == 0) cout<<x/k<<endl;
        else cout<<x/k + 1<<endl;

    }

    return 0;
}