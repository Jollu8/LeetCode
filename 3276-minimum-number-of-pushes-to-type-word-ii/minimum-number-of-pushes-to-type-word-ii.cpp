class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnts(26);
        for (char &c : word) {
            cnts[c - 'a']++;
        }

        sort(cnts.rbegin(), cnts.rend());

        int total_press = 0;
        int press_level = 1;
        int letter_idx = 0;
        for (int cnt : cnts) {
            total_press += cnt * press_level;
            letter_idx++;
            press_level = (letter_idx + 8) / 8;
        }

        return total_press;
    }
};