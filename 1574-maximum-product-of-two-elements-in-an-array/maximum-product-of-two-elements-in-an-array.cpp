class Solution {
public:
    int maxProduct(vector<int>& A) {
        int a{}, b{};
        for(auto i : A){
            if(i > a) b = exchange(a, i);
            else b = max(b, i);
        }
        return (a-1) * (b-1);
    }
};