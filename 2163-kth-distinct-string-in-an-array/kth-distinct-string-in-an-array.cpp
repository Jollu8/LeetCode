class Solution {
public:
    string kthDistinct(vector<string> &arr, int k) {
        unordered_map<string, int> mp;
        for (auto &v: arr) mp[v]++;
        if (mp.size() < k) return "";
        // if (mp.size() == arr.size()) return arr[0];

        vector<string> buf;
        for (int i = 0, t = k; i < arr.size() && t > 0; ++i) {
            if (mp[arr[i]] == 1) {
                buf.emplace_back(arr[i]);
//                std::cout << arr[i] << " ";
                --t;
            }
        }

        return (!buf.empty()) ? buf[k - 1] : "";


    }
};