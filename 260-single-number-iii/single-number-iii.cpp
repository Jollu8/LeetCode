class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
    std::unordered_map<int, int> seen;
    for (auto i: nums) {
        if (!seen.contains(i)) {
            seen[i] = 1;
        } else {
            seen[i]++;
        }
    }
    std::vector<int> ans;
    for (auto it: nums) {
        if (seen.find(it)->second == 1) {
            ans.emplace_back(seen.find(it)->first);
        }
    }
    return ans;
}
};