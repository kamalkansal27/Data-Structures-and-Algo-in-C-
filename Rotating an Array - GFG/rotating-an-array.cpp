//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
private:
    void reverse(int i, int j, int arr[]){
        while(i < j){
            swap(arr[i], arr[j]);
            i ++;
            j --;
        }
    }
public:
    void leftRotate(int arr[], int n, int d) {
        reverse(0, d-1, arr);
        reverse(d, n-1, arr);
        reverse(0, n-1, arr);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends