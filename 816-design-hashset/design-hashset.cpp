class MyHashSet {
    int size = 16;

    int hasing(int k) {
        return std::hash<int>{}(k) % size;
    }

    vector<list<int>> m_arr;


public:
    MyHashSet() : m_arr(size) {

    }

    void add(int key) {
        if (m_arr.size() * 0.75 > size) {
            size = size * 2;
            vector<list<int>> tmp(size);
            for (auto &i: m_arr)
                for (auto j: i)
                    tmp[hasing(j)].push_back(j);
            swap(tmp, m_arr);
        }
        if (!contains(key)) {
            m_arr[hasing(key)].push_back(key);
        }
    }

    void remove(int key) {
        if (contains(key)) {
            m_arr[hasing(key)].remove(key);
        }
    }

    bool contains(int key) {
        int index = hasing(key);
        for (auto i: m_arr[index]) if (i == key) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */