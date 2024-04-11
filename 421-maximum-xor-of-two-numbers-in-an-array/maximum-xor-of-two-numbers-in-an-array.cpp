class Solution {
    struct trie {
        vector<trie *> ch;

        trie() {
            ch = vector<trie *>(2, nullptr);
        }
    } *root;

    void insert(int k) {
        auto tmp = root;
        bitset<32> bs(k);

        for (auto j = 31; j >= 0; --j) {
            if (!tmp->ch[bs[j]]) tmp->ch[bs[j]] = new trie();
            tmp = tmp->ch[bs[j]];
        }
    }


    int max_xor(int n) {
        auto tmp = root;
        bitset<32> bs(n);
        int ans{};
        for (int i = 31; i >= 0; --i) {
            if (tmp->ch[!bs[i]]) ans += (1 << i), tmp = tmp->ch[!bs[i]];
            else tmp = tmp->ch[bs[i]];
        }
        return ans;
    }

public:
    Solution() {
        root = new trie();
    }


    int findMaximumXOR(vector<int> &nums) {
        for (auto n: nums) insert(n);

        int ans = 0;
        for (auto n: nums) ans = max(ans, max_xor(n));
        return ans;
    }

};