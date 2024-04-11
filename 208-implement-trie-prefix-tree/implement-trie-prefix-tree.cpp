struct TrieNode {
    std::unordered_map<char, TrieNode*> children;
    bool isword;

    TrieNode() : isword(false) {}
};

class Trie {
    TrieNode *root;
public:
    Trie() {root = new TrieNode();}

    void insert(string word) {
        auto tmp = root;
        for(auto a : word) {
            int i = a-'a';
            if(!tmp->children[i]) tmp->children[i] = new TrieNode();
            tmp = tmp->children[i];
        }
        tmp->isword = true;
    }

    bool search(string word, bool prefix = false) {
        auto tmp = root;
        for(auto a : word) {
            int i = a-'a';
            if(!tmp->children.contains(i)) return false;
            tmp = tmp->children[i];
        }
        if (!prefix) return tmp->isword;
        return true;
    }

    bool startsWith(string prefix) {
        return search(std::move(prefix), true);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */