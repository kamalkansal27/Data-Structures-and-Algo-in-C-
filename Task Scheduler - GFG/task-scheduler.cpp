//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int k, int n, vector<char> &tasks) {
        // Step1 : Take the frequencies of the all the task.
        unordered_map<char, int> mapTasktoFreq;
        for(int i = 0; i < tasks.size(); i ++){
            mapTasktoFreq[tasks[i]] ++;
        };
        // Step2 : Push all the frequencies in the maxHeap.
        priority_queue<int> maxHeap;
        for(auto it : mapTasktoFreq){
            maxHeap.push(it.second);
        }
        // Step3 : Process all the tasks.
        int time = 0;
        deque<pair<int, int>> dq;
        // Run loop untill you have task left in heap or queue means you have something to do.
        while(!maxHeap.empty() || !dq.empty()){
            // If there is any task in maxHeap.
            time ++;
            if(!maxHeap.empty()){
                int maxi = maxHeap.top();
                maxHeap.pop();
                // If the frequency of the task is not 1 that is not the last time.
                if(maxi - 1 != 0){
                    dq.push_back({maxi - 1, time + n});
                }   
            }
            if(!dq.empty()){
                pair<int, int> front = dq.front();
                if(front.second == time){
                    dq.pop_front();
                    maxHeap.push(front.first);
                }
            }
        }
        return time;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends