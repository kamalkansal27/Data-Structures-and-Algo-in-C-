//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int maxi = INT_MIN;
	    int secMaxi = INT_MIN;
	    for(int i = 0; i < n; i ++){
	        if(maxi < arr[i]){
	            secMaxi = maxi;
	            maxi = max(maxi, arr[i]);
	        }
	        else if(maxi > arr[i]){
	            secMaxi = max(secMaxi, arr[i]);
	        }
	    }
	    if(secMaxi == INT_MIN) return -1;
	    return secMaxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends