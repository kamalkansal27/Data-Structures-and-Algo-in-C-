#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int skill[n];
        int count_one = 0;
        int count_zero = 0;
        for(int i=0;i<n;i++){
            cin>>skill[i];
            if(skill[i] == 1) count_one++;
            else count_zero++;
        }

        int damage[n];
        long long int sum = 0;
        int mini = INT_MAX;

        for(int i=0;i<n;i++){
            cin>>damage[i];
            sum += damage[i];
            mini = min(damage[i], mini);
        }
        vector<int> temp1;
        vector<int> temp0;
        for(int i=0;i<n;i++){
            if(skill[i] == 1){
                temp1.push_back(damage[i]);
            }
            else{
                temp0.push_back(damage[i]);
            }
        }

        sort(temp1.begin(), temp1.end(), greater<int>());
        sort(temp0.begin(), temp0.end(), greater<int>());

        if(n == 1) cout<<damage[0]<<endl;
        else if(count_one == 0 || count_zero == 0) cout<<sum<<endl;
        else if(count_one == count_zero) cout<<2*sum - mini<<endl;
        else{
            if(count_one > count_zero){
                for(int i=0;i<temp0.size();i++){
                    sum += temp0[i];
                }
                for(int i=0;i<count_zero;i++){
                    sum += temp1[i];
                }
                cout<<sum<<endl;
            }
            else{
                for(int i=0;i<temp1.size();i++){
                    sum += temp1[i];
                }
                for(int i=0;i<count_one;i++){
                    sum += temp0[i];
                }
                cout<<sum<<endl;
            }
        }
    }

    return 0;
}