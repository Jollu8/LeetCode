
class Solution {
public:
    vector<int> dijks(int src,vector<vector<pair<int,int>>>&adj,int n){
        vector<int>dist(n,INT_MAX);
        dist[src] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,src});
        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();
            int u = temp.second;
            for(auto it:adj[u]){
                int wei = it.second;
                int v = it.first;
                if( (dist[u]+wei) < dist[v]){
                    dist[v] =dist[u]+wei;
                    pq.push({dist[v],v});
                } 
            }
        }
        return dist;
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }

        pair<int,int> ans={INT_MAX,INT_MAX};
        for(int i=0;i<n;i++){
            int curr = 0;
            vector<int>dist = dijks(i,adj,n);
            for(int j=0;j<n;j++){
                if(j!=i){
                    if(dist[j] <= distanceThreshold){
                        curr++;
                    }
                }
            }
            if(curr <= ans.second){
                ans.first = i;
                ans.second = curr;
            }
        }
        return ans.first;
    }
};