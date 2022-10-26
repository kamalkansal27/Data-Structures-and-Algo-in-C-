// Given the array of the strings, we need to find the distinct number of strings.
#include<bits/stdc++.h>
using namespace std;

int UniqueCount(vector<string> arr)
{
    sort(arr.begin(), arr.end());
    int distinct = 0;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(i == 0 || arr[i] != arr[i+1])
        {
            distinct ++;
        }
    }
    return distinct;
}

int main()
{
    vector<string> arr = {"aa", "ba", "ca", "aa", "bb"};
    cout<<UniqueCount(arr)<<endl;

    return 0;
}