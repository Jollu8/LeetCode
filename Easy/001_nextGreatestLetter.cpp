





#include <vector>
#include <algorithm>

class Solution {
public:
    char nextGreatestLetters(std::vector<char>&letters, char  target) {
        std::sort(letters.begin(), letters.end());
        for(auto i : letters) {
            if(i > target) {
                return i;
            }
        }
        return letters[0];
    }

};

