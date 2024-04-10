class Solution {
public:
    int numJewelsInStones(string j, string stone) {
        vector<bool> asc(256, false);
        for (auto i: j)
            asc[i] = true;

        int ans{};
        for (auto i: stone)
            if (asc[i])++ans;
        return ans;
    }
};