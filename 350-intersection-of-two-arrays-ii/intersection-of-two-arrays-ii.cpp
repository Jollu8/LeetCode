class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<int> ans;
        auto vit1 = v1.begin();
        auto vit2 = v2.begin();

        while (vit1 != v1.end() && vit2 != v2.end()) {
            if (*vit1 < *vit2)
                ++vit1;
            else if (*vit1 > *vit2)
                ++vit2;
            else {
                ans.push_back(*vit1);
                ++vit1;
                ++vit2;
            }
        }
        return ans;
    }
};
