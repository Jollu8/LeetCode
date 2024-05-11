class TimeMap {
    unordered_map<string, map<int, string>>mp;

public:
    TimeMap() {
        
    }
    
    void set(string key, string v, int t) {
        mp[key].insert({t, v});
    }
    
    string get(string key, int t) {
        auto it = mp[key].upper_bound(t);
        return it == mp[key].begin() ? "" : prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */