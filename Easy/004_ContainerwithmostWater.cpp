////@jollu
//Container   with  Most Water
//
//Input: height = [1,8,6,2,5,4,8,3,7]
//Output: 49
//Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.


#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int max1 = 0;
        while(l < r)
        {
            int right = height[r];
            int left = height[l];
            int min1 = min(left, right);
            max1 = max(max1, min1 * (r - l));
            if(left < right)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return max1;
    }
};

int main()
{
    Solution s;
    vector<int> vec{1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(vec);
}