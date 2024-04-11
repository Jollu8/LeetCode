class WordDictionary {
    struct trie {
        bool has = false;
        unordered_map<char, std::unique_ptr<trie >> ch;

    };
    std::unique_ptr<trie> root;

    bool s_dfs(unique_ptr<trie> &r, string &w, int i) {
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
        root = make_unique<trie>(new trie());
    }

    void addWord(string word) {
        auto tmp = root.get();
        for (auto a: word) {
            if (!tmp->ch[a]) { tmp->ch[a] = make_unique<trie>(trie()); }
            tmp = tmp->ch[a].get();
        }
        tmp->has = true;
    }

    bool search(string word) {

        return s_dfs(root, word, 0);

    }
};