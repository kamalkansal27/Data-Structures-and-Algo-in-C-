#include<bits/stdc++.h>
using namespace std;

void solve(int n, int numbers[]){
    int firstelement = 0;
    int secondelement = 0;

    firstelement = numbers[0]+numbers[n-2];
    for(int i=1;i<n-2;i++){
        firstelement += numbers[i]*(n-2);
    }
    secondelement = numbers[1]+numbers[n-1];
    for(int i=2;i<n-1;i++){
        secondelement += numbers[i]*(n-2);
    }
    firstelement = firstelement % 10;
    secondelement = secondelement % 10;

    cout<<firstelement<<secondelement<<endl;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    solve(n, arr);

    return 0;
}