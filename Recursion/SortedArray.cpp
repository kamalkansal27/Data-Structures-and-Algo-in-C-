#include<bits/stdc++.h>
using namespace std;

bool Sorted(int arr[], int n)
{
    if(n == 1) return true;

    if(arr[0] < arr[1] and Sorted(arr + 1, n - 1)) return true;

    return false;
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(Sorted(arr, n)) cout<<"Array is Sorted."<<endl;
    else cout<<"Array is not Sorted."<<endl;

    return 0;
}