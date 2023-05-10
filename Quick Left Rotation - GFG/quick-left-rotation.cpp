//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	private:
    void reverse(int i, int j, int arr[]){
        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   if(k > n) k = k % n;
	   reverse(0, k-1 ,arr);
	   reverse(k, n-1, arr);
	   reverse(0, n-1, arr);
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends