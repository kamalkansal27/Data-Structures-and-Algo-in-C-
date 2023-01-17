#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b){
    if(a == b) return 0;
    int counta[6] = {0};
    int countb[6] = {0};
    while(a % 2 == 0){
        a = a/2;
        counta[2]++;
    }
    while(a % 3 == 0){
        a = a/3;
        counta[3]++;
    }
    while(a % 5 == 0){
        a = a/5;
        counta[5]++;
    }
    while(b % 2 == 0){
        b = b/2;
        countb[2]++;
    }
    while(b % 3 == 0){
        b = b/3;
        countb[3]++;
    }
    while(b % 5 == 0){
        b = b/5;
        countb[5]++;
    }

    if(a != b) return -1;
    int operations = abs(counta[2]-countb[2]) + abs(counta[3]-countb[3]) + abs(counta[5]-countb[5]);
    return operations;
}

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<solve(a, b)<<endl;

    return 0;
}