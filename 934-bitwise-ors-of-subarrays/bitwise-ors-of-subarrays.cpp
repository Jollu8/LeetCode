#define  b begin()
#define  e end()

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& nums) {
        unordered_set<int> ans, cur;

        for(auto n: nums) {
            std::unordered_set<int> next{n};
            std::transform(cur.begin(), cur.end(), std::inserter(next, next.e), [&n](int i) { return i | n; });
            cur = next;
            ans.insert(cur.begin(), cur.end());

        }
        return ans.size();
    }
};