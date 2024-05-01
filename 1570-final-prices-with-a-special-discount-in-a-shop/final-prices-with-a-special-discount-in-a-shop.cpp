class Solution {
public:
    vector<int> finalPrices(vector<int>& A) {
        stack<int> st;
        for(int i = 0; i < A.size(); ++i) {
            while(!st.empty() && A[st.top()] >= A[i]){
                A[st.top()] -= A[i];
                st.pop();
            }
            st.push(i);
        }
        return A;
    }

};