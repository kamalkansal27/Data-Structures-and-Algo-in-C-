#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int maxi = INT_MIN;
    int max_index;
    int mini = INT_MAX;
    int min_index;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(maxi < arr[i]){
            maxi = arr[i];
            max_index = i;
        }
        if(mini >= arr[i]){
            mini = arr[i];
            min_index = i;
        }
    }

    int max_time = max_index - 0;
    int min_time = n - 1 - min_index;

    if(min_index < max_index){
        max_time -= 1;
    }
    cout<<max_time + min_time<<endl;

    return 0;
}