class Solution {
public:
    int maximumUnits(vector<vector<int>>& A, int t) {
        sort(A.begin(), A.end(), [](auto&a, auto &b) {return a[1] > b[1];});
        int ans{}, box{};

        for(auto i = 0; i < A.size() && box <= t; ++i) {
            if(box + A[i][0] > t) {
                while(box < t) {
                    ans += A[i][1];
                    box++;
                }
            }else if(box + A[i][0] <= t){
                box += A[i][0];
                ans += A[i][0] *A[i][1];
            }
        }
        for(auto &v :A) std::cout << "[" << v[0] << " " << v[1] << "],";
        return ans;
    }
};