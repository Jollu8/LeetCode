class Solution {
public:
    string compressedString(string s) {
        std::string ans;
        if (s.empty()) return ans;

        int cnt{};
        auto c = s.front();
        for (char i: s) {
            if (c != i ) {
                if(cnt != 1){
                    ans += to_string(cnt) + c;
                }else {
                    ans += to_string(cnt) + c;
                }
                c = i;
                cnt = 1;
            }
            else if (cnt + 1 > 9) {
                ans += to_string(cnt) + i;
                cnt = 1;
            }  else cnt++;
        }
        return ans + to_string(cnt ) + s.back();

    }
};
