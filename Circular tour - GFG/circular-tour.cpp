//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        long long totalPetrol = 0;
        long long totalDistance = 0;
        for(int i = 0; i < n; i ++){
            totalPetrol += p[i].petrol;
            totalDistance += p[i].distance;
        }
        if(totalPetrol < totalDistance) return -1;
        long long curr_petrol = 0;
        int start = 0;
        for(int i = 0; i < n; i ++){
            if(curr_petrol < 0){
                curr_petrol = 0;
                start = i;
            }
            curr_petrol += p[i].petrol - p[i].distance;
        }
        return start;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends