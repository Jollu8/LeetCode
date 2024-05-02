#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> mergeSimilarItems(std::vector<std::vector<int>>& items1, std::vector<std::vector<int>>& items2) {
        std::map<int, int> cnt;
        for (auto& item : items1) {
            cnt[item[0]] += item[1];
        }
        for (auto& item : items2) {
            cnt[item[0]] += item[1];
        }
        std::vector<std::vector<int>> ans;
        for (auto& item : cnt) {
            ans.push_back({item.first, item.second});
        }
        return ans;
    }
};

