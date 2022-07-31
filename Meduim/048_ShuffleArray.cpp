#include <vector>

using namespace std;

class Solution {
    vector<int>temp;
public:
    Solution(vector<int>& nums) : temp(nums){
        
    }
    
    vector<int> reset() {
        return temp;
        
    }
    
    vector<int> shuffle() {
           vector<int> shuf=temp;
        int n = shuf.size();
        
        for(int i = 0; i < n; i++){
            // get random index to swap with nums[i]
            int ran = rand() % n;
            swap(shuf[i], shuf[ran]);
        }
        return shuf;
    }
};
