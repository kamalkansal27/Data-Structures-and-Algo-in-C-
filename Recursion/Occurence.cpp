// Find the First and last Occurence of the number in the Array.

#include<bits/stdc++.h>
using namespace std;

int FirstOcc(int arr[] ,int n, int key, int i)
{
    if(i == n) return -1;
    if(arr[i] == key) return i;

    return FirstOcc(arr, n, key, i+1);
}
int LastOcc(int arr[], int n, int key, int i)
{
    if(i < 0) return -1;
    if(arr[i] == key) return i;

    return LastOcc(arr, n, key, i-1);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int key;
    cin>>key;

    cout<<FirstOcc(arr, n, key, 0)<<" ";
    cout<<LastOcc(arr, n, key, n)<<endl;
    

    return 0;
}