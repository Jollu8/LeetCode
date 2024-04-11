class Solution {
    struct trie {
        vector<trie *> ch;
        string word;

        trie() {
            ch = vector<trie *>(26, nullptr);
        }
    } *root;

    void insert(string &str) {
        auto tmp = root;
        for (auto a: str) {
            int i = a - 'a';
            if (tmp->ch[i] == nullptr)
                tmp->ch[i] = new trie();
            tmp = tmp->ch[i];
        }
        tmp->word = str;
    }

    string check(string &pref) {
        auto tmp = root;
        for (auto a: pref) {
            int i = a - 'a';
            if (!tmp->ch[i]) return pref;
            tmp = tmp->ch[i];
            if (!tmp->word.empty()) return tmp->word;
        }
        return pref;
    }

public:
    Solution() {
        root = new trie();
    }

    string replaceWords(vector<string> &d, string s) {
        for (auto &w: d)
            insert(w);
        string ans;

        istringstream ss(s);
        string tmp;
        while (ss >> tmp) {
            string root = check(tmp);
            if (ans.empty())
                ans = root;
            else
                ans += " " + root;
        }

        return ans;
    }
};
