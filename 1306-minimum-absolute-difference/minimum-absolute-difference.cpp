auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>> ans;
        int m = INT_MAX;
        for(auto i = 1; i < A.size(); ++i) 
            if(A[i] > A[i-1]) m = min(A[i]- A[i-1], m);
        std::cout << m;
        for(auto i = 1; i < A.size(); ++i) 
            if(A[i] - A[i-1] == m) ans.push_back({A[i-1], A[i]});
        return ans;

    }
};