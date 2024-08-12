class KthLargest {
    int k;
    priority_queue<int, std::vector<int>, greater<int>> h;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(auto n : nums) add(n);
    }
    
    int add(int val) {
        if(h.size() < k) h.push(val);
        else if(val > h.top()) {
            h.pop();
            h.push(val);
        }
        return h.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */