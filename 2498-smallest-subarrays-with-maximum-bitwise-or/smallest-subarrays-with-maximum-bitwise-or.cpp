#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> nextPos(32, -1); 
        for (int i = n - 1; i >= 0; --i) {
            for (int bit = 0; bit < 32; ++bit) {
                if ((nums[i] >> bit) & 1) {
                    nextPos[bit] = i;
                }
            }
            int maxPos = i;
            for (int bit = 0; bit < 32; ++bit) {
                if (nextPos[bit] != -1) {
                    maxPos = max(maxPos, nextPos[bit]);
                }
            }
            ans[i] = maxPos - i + 1;
        }
        return ans;
    }
};
