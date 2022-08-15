#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        multiset<int>list(nums.begin(), nums.end());
        int n;
        for(auto &i : list) {
            if(list.count(i) > 1) {
              n =  i;
                break;
            }  
        }
        return n;
    }
};
