class Solution {
public:
    int countCharacters(vector<string>& A, string s) {
        int ans{};
        vector<int> hash(26);
        for(auto c : s)++hash[c-'a'];

        vector<int> a(26);
        for(auto &v : A) {
            for(auto c : v)++a[c-'a'];
            bool match = true;
            for(auto i = 0 ; i < 26 && match; ++i)
                if(hash[i] < a[i]) match = false;

            if(match) 
                ans += v.size();
            std::fill(a.begin(), a.end(), 0);

        }
        return ans;

    }
};