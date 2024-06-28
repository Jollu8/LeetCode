class Solution {
    string ans, dp;
    vector<char> dex{'a', 'b', 'c'};

    void bkg(char x, int n, int& k) {

        if (dp.size() == n) {

            if (--k == 0)
                ans = dp;

            return;
        }
        for (int i = 0; i <= 2 && k; i++) {
            if (dex[i] != x) {
                dp.push_back(dex[i]);
                bkg(dex[i], n, k);
                dp.pop_back();
            }
      
        }
    }

public:
    string getHappyString(int n, int k) {
        char ch = 'd';
        bkg(ch, n, k);
        return ans;
    }
};