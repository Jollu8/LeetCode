
class Trie {
    struct node {
        vector<node*> ch;
        bool is;

        node() : ch(26), is(false) {}
    };

    node *root;
public:
    Trie() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        root = new node();
    }

    void insert(string word) {
        auto t = root;
        for (auto a: word) {
            int c = a - 'a';
            if (!t->ch[c]) t->ch[c] = new node();
            t = t->ch[c];
        }
        t->is = true;
    }

    bool search(string word, bool p = false) {
        auto t = root;
        for (auto a: word) {
            int c = a - 'a';
            if (!t->ch[c]) return false;
            t = t->ch[c];
        }
        if (!p) return t->is;
        return true;
    }

    bool startsWith(string p) {
        return search(std::move(p), true);
    }
};