////@jollu

//78 Subset
//  Given an integer array nums of unique elements, return all possible subsets (the power set).
//
//The solution set must not contain duplicate subsets. Return the solution in any order.


#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        ans.push_back({});
        for (int i = 0; i < n; i++) {
            int size = ans.size();
            for (int j = 0; j < size; j++) {
                vector<int> temp = ans[j];
                temp.push_back(nums[i]);

                ans.push_back(temp);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> vec{1, 2, 3};
    auto res = s.subsets(vec);
    for (auto i: res) {

        for (auto j: i) {
            cout << "[" << j << "," << "]";
        }
//        cout << "]";
    }
}