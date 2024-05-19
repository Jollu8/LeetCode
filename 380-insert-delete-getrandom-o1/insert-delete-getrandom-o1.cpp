class RandomizedSet {
    unordered_set<int> u;
public:
    RandomizedSet() {

    }

    bool insert(int val) {
        if (u.contains(val)) return false;
        u.insert(val);
        return true;
    }

    bool remove(int val) {
        if (!u.contains(val)) return false;
        u.erase(val);
        return true;
    }

    int getRandom() {
        return *next(u.begin(), rand() % u.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */