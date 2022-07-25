///// @Jollu
// 520. Detect Capital



#include <cstdint>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <unordered_map>
#include <exception>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    bool all_low(string str)
    {
        for(auto x: str)
        {
            if(x>= 'A' && x <= 'Z')
            {
                return false;
            }
        }

        return true;
    }

    bool all_high(string str)
    {
        for(auto x: str)
        {
            if(x>= 'a' && x <= 'z')
            {
                return false;
            }
        }

        return true;
    }


    bool detectCapitalUse(string word) {

        if(word[0] >= 'A' && word[0] <= 'Z')
        {
            return (all_low(word.substr(1)) || all_high(word.substr(1)));
        }

        else
        {
            return all_low(word.substr(1));
        }

    }
};

int main() {
    Solution s;
    cout << boolalpha <<  s.detectCapitalUse("USA");
}