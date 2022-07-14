////@jollu

// Fond Last word

#include <iostream>
#include <vector>


using namespace std;
#include <sstream>

class Solution {
public:
    int lengthOfLastWord(string s) {
        std::reverse(s.begin(), s.end());
        stringstream ss(s);
        string str;
        ss >> str;
        return str.size();

    }

};

int main() {
    Solution s;
    string str= "Hell   wr0 ld   ";
    cout << s.lengthOfLastWord(str);


}