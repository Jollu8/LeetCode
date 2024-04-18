class WordDictionary {
    struct TrieNode {
        bool isEnd = false;
        unordered_map<char, unique_ptr<TrieNode>> children;
    };
    unique_ptr<TrieNode> root;

public:
    WordDictionary() : root(make_unique<TrieNode>()) {}

    void addWord(const string &word) {
        auto node = root.get();
        for (char c: word) {
            if (!node->children[c]) {
                node->children[c] = make_unique<TrieNode>();
            }
            node = node->children[c].get();
        }
        node->isEnd = true;
    }

    bool search(const string &word) {
        return searchDFS(root, word, 0);
    }

private:
    bool searchDFS(const unique_ptr<TrieNode> &node, const string &word, int index) {
        if (index == word.size()) return node->isEnd;
        char c = word[index];
        if (c == '.') {
            for (auto &[ch, child]: node->children)
                if (searchDFS(child, word, index + 1)) return true;
        } else {
            if (node->children.count(c) && searchDFS(node->children[c], word, index + 1))
                return true;
        }
        return false;
    }
};