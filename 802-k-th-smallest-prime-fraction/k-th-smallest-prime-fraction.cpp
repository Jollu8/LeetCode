class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& A, int k) {
        priority_queue<pair<double, pair<int, int> >>pq;

        for(int i = 0; i < A.size(); ++i) pq.push({-1.0 * A[i] / A.back(), {i, A.size()-1}});

        while(--k > 0) {
            pair<int, int> cur = pq.top().second;
            pq.pop();
            cur.second--;
            pq.push({-1.0 * A[cur.first] / A[cur.second], {cur.first, cur.second}});
        }
        pair<int, int> tmp = pq.top().second;
        return {A[tmp.first], A[tmp.second]};
    }
};