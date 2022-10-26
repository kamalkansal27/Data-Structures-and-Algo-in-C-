#include<bits/stdc++.h>
using namespace std;

long long int solve(int n, vector<long long int> &arr, long long int type, long long int element){
    long long int ans = 0;
    return ans;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, q;
        cin>>n>>q;

        vector<long long int> arr(n);
        long long int sum = 0;
        int even = 0;
        int odd = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] % 2 == 0) even ++;
            else odd ++;
            sum += arr[i];
        }

        for(int i=0;i<q;i++){
            long long int type, element;
            cin>>type>>element;

            if(type == 0){
                sum += even*element;
                if(element % 2 != 0){
                    odd += even;
                    even = 0;
                }
            }
            else{
                sum += odd*element;
                if(element % 2 != 0){
                    even += odd;
                    odd = 0;
                }
            }
            cout<<sum<<endl;
        }

    }

    return 0;
}