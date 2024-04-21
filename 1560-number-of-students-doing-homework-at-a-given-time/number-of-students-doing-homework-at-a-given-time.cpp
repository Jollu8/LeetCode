class Solution {
public:
    int busyStudent(vector<int>& a, vector<int>& b, int t) {
        int ans{};
        for(int i = 0; i < a.size(); ++i) {
            if(a[i] <= t && b[i] >= t ) ++ans;
        }
        return ans;
        
    }
};