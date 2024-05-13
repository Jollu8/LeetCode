class Solution {
public:
    long long findTheArrayConcVal(vector<int>& A) {
        long long ans{};
        int l = 0, r = A.size()-1;
        for(; l < r; ++l, --r)
            ans += stoi(to_string(A[l])+ to_string(A[r]));
        if(A.size()&1) ans += A[r];
        return ans;
  
   }
};