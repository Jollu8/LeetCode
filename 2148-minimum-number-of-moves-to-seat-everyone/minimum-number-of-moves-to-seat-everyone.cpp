class Solution {
public:
    int minMovesToSeat(vector<int>& A, vector<int>& stud) {
        int ans{};
        sort(A.begin(), A.end());
        sort(stud.begin(), stud.end());
        for(int i = 0; i < A.size(); ++i){
            ans += abs(A[i] - stud[i]);
        }
        return ans;
    }
};