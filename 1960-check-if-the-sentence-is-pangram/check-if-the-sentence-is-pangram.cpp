class Solution {
public:
    bool checkIfPangram(string s) {
        uint32_t seen{};
        for( auto c : s) {
            auto i = c-'a';
            seen = seen | (1 << i);
        }
        return seen == ((1 << 26) - 1);
    }
};
