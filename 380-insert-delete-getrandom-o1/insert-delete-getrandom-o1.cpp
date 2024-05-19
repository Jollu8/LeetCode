class RandomizedSet {
    unordered_map<int, int> mp;
    vector<int> v;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.contains(val)) return false;
        mp[val] = v.size();
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(!mp.contains(val)) return false;
        auto f = mp[val];
        v[f] = v.back();
        v.pop_back();
        mp[v[f]] = f;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
       return  v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */