class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        // Initialize run_s with size n+1
        vector<int> run_s = vector<int>(n + 1, 0); 
        vector<int> arr;
        
        // Calculate prefix sums
        for (int i = 0; i < n; ++i)
            run_s[i + 1] = run_s[i] + nums[i];

        // Generate all subarray sums
        for (int i = 0; i < n; ++i)
            for (int j = 0; i + j < n; ++j)
                arr.push_back(run_s[i + j + 1] - run_s[i]);

        // Sort the array of subarray sums
        sort(arr.begin(), arr.end());

        // Compute the sum of the elements within the specified range
        int r = 0;
        int div = pow(10, 9) + 7;
        for (int i = left - 1; i < right; ++i) {
            r += arr[i];
            r %= div; 
        }
        return r;
    }    
};