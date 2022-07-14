////@jollu

//56. Merge Intervals
//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
//
//
//
//Example 1:
//
//Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
//Output: [[1,6],[8,10],[15,18]]
//Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].




#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>> ans;
        ans.push_back(arr[0]);

        for(int i=1;i<n;i++){
            if(ans.back()[1]>=arr[i][0])
                ans.back()[1]=max(ans.back()[1],arr[i][1]);
            else ans.push_back(arr[i]);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<vector<int>> vec(9);
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            vec[i].push_back(j);
        }
    }
    auto res = s.merge(vec);
    for (auto i: res) {
        for(auto j :  i){
            cout << j << ",";
        }
        cout << endl;
    }


}