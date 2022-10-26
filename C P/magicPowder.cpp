#include<bits/stdc++.h>
using namespace std;

bool canMake(int n, int available[], int need[], int totalIngredients, int k){

    int totalNeed[totalIngredients];
    for(int i=0;i<totalIngredients;i++){
        totalNeed[i] = need[i]*n;
        totalNeed[i] = available[i] - totalNeed[i];
    }
    
    for(int i=0;i<totalIngredients;i++){
        if(totalNeed[i] < 0){
            if(abs(totalNeed[i])>k){
                return false;
            }
            else{
                k = k - abs(totalNeed[i]);
            }
        }
    }
    return  true;
}
int main(){

    int n, k;
    cin>>n>>k;

    int need[n];
    for(int i=0;i<n;i++){
        cin>>need[i];
    }

    int available[n];
    for(int i=0;i<n;i++){
        cin>>available[i];
    }

    int i=0;
    int j=2001;

    int ans = 0;
    while(i<=j){
        int mid = (i+j)/2;
        if(canMake(mid, available, need, n, k)){
            ans = mid;
            i = mid + 1;
        }
        else{
            j = mid - 1;
        }
    }
    cout<<ans<<endl;

    return 0;
}