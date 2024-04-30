class Solution {
    unordered_map<char, string> table{{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
                                      {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
                                      {'8', "tuv"}, {'9', "wxyz"}};

    std::vector<std::string> ans;

    void backtrack(std::string& d, int i, std::string& cur) {
        if (i == d.size()) {
            ans.emplace_back(cur);
            return;
        }

        for (auto a : table[d[i]]) {
            cur.push_back(a);
            backtrack(d, i + 1, cur);
            cur.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string& d) {
        if (d.empty())
            return ans;

        std::string cur;
        backtrack(d, 0, cur);
        return ans;
    }
};