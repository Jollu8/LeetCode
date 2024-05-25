class Solution {
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x) {
        int l{}, r = arr.size() - 1;
        for(; r-l >= k; (abs(arr[l] - x) > abs(arr[r] - x)) ? ++l : --r);  
        return {arr.begin() + l, arr.begin() + r+1};

    }
};