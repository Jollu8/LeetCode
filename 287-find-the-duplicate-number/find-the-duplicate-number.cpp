class Solution {
public:
    int findDuplicate(vector<int>& A) {
        vector<int>seen(A.size()+1);
        for(auto i : A) {
            ++seen[i];
            if(seen[i] > 1)return i;
        }
        return 42;
        
    }
};