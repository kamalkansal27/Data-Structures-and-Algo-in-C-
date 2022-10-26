// // To return the maximum area formed by the histogram and the bars are given by the array.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];

//     stack<int> st;
//     st.push(arr[0]);
//     int b;

//     // Pushing elements into the stack till the smaller bar is encountered.
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i] > arr[i-1]) st.push(arr[i]);
//         else
//         {
//             b = arr[i];
//             break;
//         }
//     }

//     int ans = 0;
//     int maxarea = 0;
//     int i = 1;
//     while(st.top() > b)
//     {
//         ans = st.top()*i;
//         maxarea = max(ans, maxarea);
//         st.pop();
//         i++;
//     }

//     cout<<maxarea<<endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}