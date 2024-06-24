class Solution {
public:
    int minKBitFlips(vector<int>& A, int k) {
        int n = A.size();
        vector<int> flip(n-k+1);
        int cnt {}, flip_x{};

        for(int i = 0; i < n; ++i) {
            if(i>= k) flip_x -= flip[i-k];

            if((flip_x&1) == A[i]) {
                if(i+k > n) return -1;
                flip[i] = true;
                flip_x++;
                cnt++;
            }
        }
        return cnt;
    }
};