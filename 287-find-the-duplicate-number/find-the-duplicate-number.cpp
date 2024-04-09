class Solution {
public:
    int findDuplicate(vector<int>& n) {
        unordered_set<int>s;
        s.reserve(n.size());
        for(auto i : n) {
            if(!s.contains(i))s.insert(i);
            else return i;
        }
        return 0;
    }
};