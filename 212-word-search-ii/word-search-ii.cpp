class Solution {
    struct trie {
        vector<trie*> ch;
        string str;

        trie() { ch = vector<trie*>(26, nullptr); }
    }* root;

    void insert(vector<string>& v) {
        for (auto& w : v) {
            auto tmp = root;
            for (auto c : w) {
                int i = c - 'a';
                if (!tmp->ch[i])
                    tmp->ch[i] = new trie();
                tmp = tmp->ch[i];
            }
            tmp->str = w;
        }
    }

    void dfs(int x, int y, vector<vector<char>>& b, trie* t,
             vector<string>& ans) {
        if (x < 0 || y < 0 || x >= b.size() || y >= b[0].size() || !t ||
            b[x][y] == '#')
            return;
        char c = b[x][y];
        t = t->ch[c - 'a'];
        if (t && t->str.size() > 0) {
            ans.push_back(t->str);
            t->str.clear();
        }
        b[x][y] = '#';
        dfs(x + 1, y, b, t, ans);
        dfs(x - 1, y, b, t, ans);
        dfs(x, y + 1, b, t, ans);
        dfs(x, y - 1, b, t, ans);
        b[x][y] = c;
    }

public:
    Solution() { root = new trie(); }
    vector<string> findWords(vector<vector<char>>& b, vector<string>& ws) {
        insert(ws);
        vector<string> ans;
        for (int i = 0; i < b.size(); ++i)
            for (int j = 0; j < b[i].size(); ++j)
                dfs(i, j, b, root, ans);
        return ans;
    }
};
