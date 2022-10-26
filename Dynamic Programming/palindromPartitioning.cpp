// To determine the no. of partitioning in the string so that the resultant substrings are also palindrome.
#include<bits/stdc++.h>
using namespace std;

const int N = 10e2 + 3;
int t[N][N];

bool isPalindrome(string s, int i, int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int solve(string s, int i, int j){
    // Base condition.
    if(i>=j){
        return 0;
    }
    if(isPalindrome(s, i, j)){
        return 0; 
    }
    if(t[i][j] != -1){
        return t[i][j];
    }
    int partitions = INT_MAX;
    for(int k=i;k<=j-1;k++){
        int tempAns = 1 + solve(s, i, k) + solve(s, k+1, j);
        partitions = min(partitions, tempAns);
    }
    t[i][j] = partitions;
    return t[i][j];
}

int main(){

    string s;
    cin>>s;
    
    memset(t, -1, sizeof(t));
    cout<<solve(s, 0, s.length()-1)<<endl;

    return 0;
}