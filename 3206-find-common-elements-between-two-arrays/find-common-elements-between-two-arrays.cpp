class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& n1, vector<int>& n2) {
        unordered_set<int> a(n1.begin(), n1.end()), b(n2.begin(), n2.end());

        int a1{},b1{};
        for(auto i : n2){
            a1 += (a.contains(i)) ? 1 : 0;
        }
        for(auto i : n1){
            b1 += (b.contains(i)) ? 1 : 0;
        }
        
        return {b1,a1};
    }
};