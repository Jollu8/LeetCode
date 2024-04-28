class Solution {
public:
    bool checkIfPangram(string sentence) {
        uint32_t seen{};

        for (auto c : sentence) {
            seen |= (1u << (c - 'a'));
            if (__builtin_expect(__builtin_popcount(seen) == 26, 0))
                return true;
        }
        return false;
    }
};
