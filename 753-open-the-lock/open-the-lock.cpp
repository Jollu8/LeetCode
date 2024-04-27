class Solution {
    vector<string> neighbors(string & code) {
        vector<string> ans;
        for(int i = 0; i < 4; ++i) {
            for(int d = -1; d <= 1; d +=2) {
                string str = code;
                str[i] = (str[i] - '0' + d + 10) % 10 + '0';
                ans.emplace_back(str);
            }
        }
        return ans;
    }
public:
    int openLock(vector<string>& d, string t) {
        unordered_set<string> d_set(d.begin(), d.end());
        string z = "0000";
        if(d_set.contains(z)) return -1;
        queue<string > q ({z});

        for(int cnt{}; !q.empty(); ++cnt) {
            for(int i = q.size(); i > 0; --i) {
                auto cur = q.front();  q.pop();
                if(cur == t) return cnt;

                for(auto e : neighbors(cur)) {
                    if(d_set.contains(e)) continue;
                    d_set.insert(e);
                    q.push(e);
                }

            }
        }
        return -1;
    }
};