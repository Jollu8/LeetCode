///// @Jollu
// 28. Implement strStr()



#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        auto res = haystack.find(needle, 0);
        return (res != string::npos) ? res : -1;
    }
};


int main() {
    Solution s;
    std::string str("aaaaa");
    cout << s.strStr(str, string("bba"));


}