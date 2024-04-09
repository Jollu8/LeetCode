
class Solution {
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x) {
        int R = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int L = R - 1;

        vector<int> ans;
        while (k--) {
            if (R < arr.size() && (L < 0 || arr[R] - x < x - arr[L]))
                ans.push_back(arr[R++]);
            else
                ans.push_back(arr[L--]);
        }

        std::sort(ans.begin(), ans.end());
        return ans;
    }
};