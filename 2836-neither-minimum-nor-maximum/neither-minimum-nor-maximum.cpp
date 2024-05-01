class Solution {
public:
    int findNonMinOrMax(vector<int>& A) {
        int a = *min_element(A.begin(), A.end());
        int b = *max_element(A.begin(), A.end());
        for(auto i : A) {
            if(i  != a && i != b) return i;
        }
        return -1;
        
    }
};