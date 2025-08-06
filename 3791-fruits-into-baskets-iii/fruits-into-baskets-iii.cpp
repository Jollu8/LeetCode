class SegmentTree{
    vector<int> tree;
    int n;
    void build(int node, int left, int right, vector<int>& arr){
        if(left == right){
            tree[node] = arr[left];
            return;
        }

        int mid = (left + right)/2;
        build(2*node, left, mid, arr);
        build(2*node + 1, mid + 1, right, arr);

        tree[node] = max(tree[2*node], tree[2*node + 1]);
    }

    int query(int node, int left , int right, int val){
        if(tree[node] < val)return -1;

        if(left == right){
            tree[node] = 0;
            return left;
        }
    
        int mid = (left + right)/2;

        int id = -1;
        if(val <= tree[2*node]){
            id = query(2*node, left, mid, val);
        }
        else id = query(2*node + 1, mid+1, right, val);
        tree[node] = max(tree[2*node], tree[2*node + 1]);
        return id;
    }



    public:
    SegmentTree(vector<int>& arr){
        n = arr.size();
        tree.resize(4*n);
        build(1, 0, n-1, arr);
    }


    int find(int val){
        return query(1, 0, n-1, val);
    }

};


class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        SegmentTree t(baskets);

        int cnt = 0;
        for(auto it: fruits){
            int id = t.find(it);
            cnt += (id == -1);
        }

        return cnt;

    }
};