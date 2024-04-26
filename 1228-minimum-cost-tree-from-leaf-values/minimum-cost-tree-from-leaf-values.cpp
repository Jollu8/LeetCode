class Solution {
public:
    int mctFromLeafValues(vector<int>& A) {
        int ans{};
        vector<int> st = {INT_MAX};

        for(int a : A) {
            while(st.back() <= a) {
                auto m = st.back();
                st.pop_back();
                ans += m * min(st.back(), a);
            }
            st.push_back(a);
        }

        for(int i = 2; i < st.size(); ++i) {
            ans += st[i] * st[i-1];
        }
        return ans;
    }
};