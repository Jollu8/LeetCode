///// @Jollu
// 151. Reverse Words in a String


#include <string>
#include <vector>
#include <iostream>
#include <sstream>



using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        s = "";
        vector<string> rev;
        rev.reserve(s.size());
        while (ss >> s)
            rev.push_back(s);

        if (rev.empty())
            return "";
        s = rev.back();
        rev.pop_back();
        while (!rev.empty()) {
            s += " " + rev.back();
            rev.pop_back();
        }
        return s;
    }
};


int main() {
    Solution s;
    cout << s.reverseWords("Hello World");

    int a, b, c;
    if (a > b) {
        if (b > c) {

        }
    }
}