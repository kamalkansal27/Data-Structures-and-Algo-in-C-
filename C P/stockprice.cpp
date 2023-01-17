#include<bits/stdc++.h>
using namespace std;

int solve(int n, int stock[]){
    int sum = 0;
    int currsum = 0;
    int mini = INT_MAX;
    int month = -1;
    for(int i=0;i<n;i++){
        sum += stock[i];
    }
    
    for(int i=0;i<n-1;i++){
        currsum += stock[i];
        int avg = abs((currsum/i+1) - ((sum - currsum)/n-i));
        if(mini > avg){
            mini = avg;
            month = i+1;
        }
    }
    return month;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solve(n, arr)<<endl;

    return 0;
}

