///// @Jollu
// 705. Design HashSet

#include <iostream>
#include <vector>
#include <array>
//#include <set>
#include <climits>
#include <unordered_set>
//#include <algorithm>

using namespace std;

class MyHashSet {
    unordered_set<int> my_set_;
public:
    MyHashSet() {

    }

    void add(int key) {
        my_set_.insert(key);
    }

    void remove(int key) {
        my_set_.erase(key);
    }

    bool contains(int key) {
        auto search = my_set_.find(key);
        return (search != my_set_.end()) ? true : false;
    }
};


int main() {
    vector<int> vec{-1, 0, 3, 5, 9, 12};


}