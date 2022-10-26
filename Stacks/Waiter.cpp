#include<bits/stdc++.h>
using namespace std;

vector<int> waiter(vector<int> number, int q)
{
    vector<int> prime;
    int i=2;
    while(prime.size() != q+1)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j == 0) break;
        }
        if(j == i)cout<<i<<endl; prime.push_back(i);
        i++;
    }
    return prime;
}

int main()
{
    waiter({1,2}, 6);

    return 0;
}