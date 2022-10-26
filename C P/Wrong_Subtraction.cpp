#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    while(k-- and n > 0){
        int lastdigit = n % 10;
        if(lastdigit == 0){
            n /= 10;
        }
        else{
            n -= 1;
        }
    }
    cout<<n<<endl;

    return 0;
}