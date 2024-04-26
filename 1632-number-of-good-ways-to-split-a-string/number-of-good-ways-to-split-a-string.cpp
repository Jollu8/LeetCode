class Solution {
public:
    int numSplits(string s) {
        unordered_map<char, int>a;
        for(auto i : s)a[i]++;

        set<char>b;
        int ans{};
        for(auto i : s) {
            b.insert(i);
            if(a[i]== 1) a.erase(i);
            else a[i]--;
            
            if(a.size() == b.size())++ans;

        }
        return ans;   
    }
};