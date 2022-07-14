////@jollu

//57. Insert Interval
//You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.
//
//Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).
//
//Return intervals after the insertion.
//
//
//
//Example 1:
//
//Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
//Output: [[1,5],[6,9]]

#include <iostream>
#include <vector>


using namespace std;


class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0], end = intervals[0][1];
        int n = intervals.size();
        if (n == 1)return intervals;
        vector<vector<int>> v;
        int i = 1;
        while (i < n) {
            if (intervals[i][0] <= end) {
                if (intervals[i][1] > end)end = intervals[i][1];
                i++;
            } else if (intervals[i][0] > start) {
                v.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
                i++;
            }
        }
        v.push_back({start, end});
        return v;

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
    vector<int> v{3, 5};
    auto res = s.insert(vec, v);
    for (auto i: res) {
        for (auto j: i) {
            cout << j << ",";
        }
        cout << endl;
    }


}