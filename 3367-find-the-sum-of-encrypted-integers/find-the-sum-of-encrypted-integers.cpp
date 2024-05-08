class Solution {
public:
    int sumOfEncryptedInt(vector<int>& n) {
        int cnt =1;
        int ans{};
        for(auto i : n) {
            auto s = to_string(i);
            char m = *max_element(s.begin(), s.end());
            ans += stoi(string(s.size(), m));
        }

        return ans;

    }
};