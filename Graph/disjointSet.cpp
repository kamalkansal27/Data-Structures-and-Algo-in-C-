#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    
    private:
        vector<int> rank, parent;
    public:
        DisjointSet(int n){
            rank.resize(n+1, 0);
            parent.resize(n+1);
            for(int i = 0; i <= n; i++){
                parent[i] = i;
            }
        }

        int findParent(int u){
            
            if(u == parent[u]){
                return u;
            }
            return parent[u] = findParent(parent[u]);
        }

        void unionbyRank(int u, int v){
            
            int pu = findParent(u);
            int pv = findParent(v);

            if(rank[pu] < rank[pv]){
                parent[pu] = pv;
            }
            else if(rank[pv] < rank[pu]){
                parent[pv] = pu;
            }
            else{
                parent[pv] = pu;
                rank[pu] ++;
            }
        }

};

int main(){


    return 0;
}