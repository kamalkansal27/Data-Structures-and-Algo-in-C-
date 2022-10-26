#include<bits/stdc++.h>
using namespace std;

int pageCount(int n, int p)
{
    int min_left = 0;
    int curr_left = 0; int curr_right = 1;

    while(curr_left != p && curr_right != p)
    {
        ++min_left;
        curr_left += 2;
        curr_right += 2;
    }
    int min_right = 0;
    if(n % 2 == 0) 
    {
        curr_left = n;
        curr_right = curr_left + 1;        
    }
    else
    {
        curr_left = n-1;
        curr_right = curr_left + 1;
    }
    while(curr_left != p && curr_right != p)
    {
        ++min_right;
        curr_left -= 2;
        curr_right -= 2;
    }

    return min(min_left, min_right);
}

int main()
{
    // int n;
    // cin >> n;
    // int p;
    // cin >> p;
    // int min_left = 0;
    // int cur_left = 0, cur_right = 1;
    // while (cur_left != p && cur_right != p) {
    //     ++min_left;
    //     cur_left += 2;
    //     cur_right += 2;
    // }
    // int min_right = 0;
    // cur_left = n % 2 == 0 ? n : n - 1;
    // cur_right = cur_left + 1;
    
    // while (cur_left != p && cur_right != p) {
    //     ++min_right;
    //     cur_left -= 2;
    //     cur_right -= 2;
    // }
    
    // cout << std::min(min_left, min_right);
    // return 0;

    cout<<pageCount(5 ,3)<<endl;

    return 0;
}