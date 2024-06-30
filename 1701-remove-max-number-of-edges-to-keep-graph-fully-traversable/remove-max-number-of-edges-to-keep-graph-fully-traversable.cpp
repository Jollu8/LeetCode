class DSU{
    public:
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n+1);
        size.resize(n+1);
        for(int i = 0 ; i <= n ; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUp(int node) {
        if(node == parent[node]) {
            return node;
        }
        return parent[node] = findUp(parent[node]);
    }

    void unionbysize(int u, int v){
        int ulpu = findUp(u);
        int ulpv = findUp(v);
        if(ulpu == ulpv) return;
        if(size[ulpu] > size[ulpv]) {
            size[ulpu] += size[ulpv];
            parent[ulpv] = ulpu;
        }
        else{
            size[ulpv] += size[ulpu];
            parent[ulpu] = ulpv;
        }
    }

};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        DSU alice(n), bob(n);
        int ans = 0;
        for(auto it : edges) {
            if(it[0] == 3) {
                if(alice.findUp(it[1]) == alice.findUp(it[2])) {
                    ans++;
                    continue;
                }
                alice.unionbysize(it[1], it[2]);
                bob.unionbysize(it[1], it[2]);
            }
        }
        for(auto it : edges) {
            if(it[0] == 3) continue;
            if(it[0] == 1) {
                if(alice.findUp(it[1]) == alice.findUp(it[2])) {
                    ans++;
                    continue;
                }
                alice.unionbysize(it[1], it[2]);
            }
            else{
                if(bob.findUp(it[1]) == bob.findUp(it[2])) {
                    ans++;
                    continue;
                }
                bob.unionbysize(it[1], it[2]);
            }
        }
        int k = alice.findUp(1);
        for(int i = 1 ; i <= n ; i++) {
            if(k != alice.findUp(i) || k != bob.findUp(i)) return -1;
        }
        return ans;
    }
};