class Solution {
public:
    int differenceOfSum(vector<int>& A) {
        int sum{},sum_d{};

        for(auto i : A) {
            sum += i;
            while(i > 0) {
                sum_d += i %10;
                i /= 10;
            }
        } 
        return sum - sum_d;
    }
};