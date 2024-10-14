class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
  long long  score = 0;

    for (int i = 0; i < k; i++) {
        int max_val = pq.top();
        pq.pop();
        score += max_val;
        pq.push(ceil(max_val / 3.0));
    }

    return score;
    }
};