class Solution {
    unordered_map<char, int> mp;
    int ans = -1;

    void bkg(int ind, int n) {
        ans++;
        if(ind == n) return ;

        for(auto& [a, b]  : mp) {
            if(b ) {
                mp[a]--;
                bkg(ind+1, n);
                mp[a]++;
            }
        }
    }
public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> mp;
        int n = tiles.size();

        for(auto c : tiles) mp[c]++;
        this->mp = move(mp);
        bkg(0, n);
        return ans;
    }
};