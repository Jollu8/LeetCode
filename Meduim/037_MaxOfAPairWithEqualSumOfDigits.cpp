///// @Jollu
// 2342. Max Sum of a Pair With Equal Sum of Digits


#include <unordered_map>
#include <vector>
#include <set>
#include <map>
#include <climits>
#include <iostream>


using namespace std;

class Solution {
private:
public:
    int maximumSum(vector<int> &nums) {
        map<int, multiset<int>> vec;
        int max_int = 0, mn = INT_MIN;
        for (int &num: nums)
            vec[num / 100 + (num / 10) % 10 + num % 10].insert(num); // return digit sum than insert vec

        for (auto it = vec.rbegin(); it != vec.rend(); it++) {
            if (it->second.size() >= 2) {
                max_int = 0;
                auto i = it->second.end();
                max_int += *(--i);
                max_int += *(--i);
                mn = max(max_int, mn);
            }
        }
        if (max_int == 0) return -1;
        return max(max_int, mn);
    }
};

int main() {
    vector<int> vec{10, 12, 19, 14};
    Solution s;
    cout << s.maximumSum(vec);

}