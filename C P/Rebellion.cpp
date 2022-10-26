#include<bits/stdc++.h>
using namespace std;

int solve(int n, int arr[]){
    int ans = 0;
    for(int i=n-1;i>0;i--){
        if(arr[i] < arr[i-1]){
            ans ++;
        }
    }
    return ans;
}

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int a = 0;
        int b = n-1;

        int temp  = 0;
        int res = 0;

        while(a < b){
            while(b >= 0 and arr[b] != 0 and a<b)
            {
                b--;
            }
            if(arr[b] != 0){
                temp = 1;
                cout<<res<<endl;
                break;
            }
            while(a < n and arr[a] != 1 and a<b){
                a++;
            }
            if(arr[a] != 1){
                temp = 1;
                cout<<res<<endl;
                break;
            }
            arr[b--] = 1;
            res ++;
            a ++;
        }
        if(!temp){
            cout<<res<<endl;
        }
    }

    return 0;
}