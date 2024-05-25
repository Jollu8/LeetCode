class RandomizedSet {
    vector<int> arr;
    unordered_map<int, int>  mp;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.contains(val)) return false;
        mp[val] = arr.size();
        arr.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(!mp.contains(val)) return false;
        auto index = mp[val];
        arr[index] = arr.back();
        arr.pop_back();
        mp[arr[index]] = index;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        return arr[rand()%arr.size()];
    }
};