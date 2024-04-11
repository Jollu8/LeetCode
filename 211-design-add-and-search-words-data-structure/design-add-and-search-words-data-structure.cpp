class WordDictionary {
    struct trie {
        bool has = false;
        unordered_map<char, trie *> ch;

    } *root;

    bool s_dfs(trie *r, string &w, int i) {
        if (i == w.size()) return r->has;

        auto c = w[i];
        if (c == '.') {
            for (auto &p: r->ch)if (s_dfs(p.second, w, i + 1))return true;
        } else {
            if (r->ch.contains(c) && s_dfs(r->ch[c], w, i + 1))return true;
        }
        return false;
    }

public:
    WordDictionary() {
        root = new trie;
    }

    void addWord(string word) {
        auto tmp = root;
        for (auto a: word) {
            if (!tmp->ch[a]) { tmp->ch[a] = new trie(); }
            tmp = tmp->ch[a];
        }
        tmp->has = true;
    }

    bool search(string word) {

        return s_dfs(root, word, 0);

    }
};
