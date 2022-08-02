///// @Jollu
// 706. Design HashMap

#include <iostream>
#include <vector>
#include <array>
//#include <set>
#include <climits>
#include <unordered_map>
//#include <algorithm>

using namespace std;

class MyHashMap {
    vector<int> v;
public:
    MyHashMap() {
        v.resize(1000001, -1);
    }

    void put(int key, int value) {
        v[key] = value;
    }

    int get(int key) {
        return v[key];
    }

    void remove(int key) {
        v[key] = -1;
    }
};


int main() {
    vector<int> vec{-1, 0, 3, 5, 9, 12};


}