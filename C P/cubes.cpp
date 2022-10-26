#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int level = 0;
    int cubes = 0;

    while(cubes < n){
        level++;
        cubes += (level*(level+1))/2;
    }
    if(cubes > n) cout<<level-1<<endl;
    else cout<<level<<endl;

    return 0;
}