class Solution {
public:
    bool isSumEqual(string a, string b, string c) {
        string a_s{}, b_s{}, c_s{};
        for(auto i : a) a_s += '0' + (i-'a');
        for(auto i : b) b_s += '0' + (i-'a');
        for(auto i : c) c_s += '0' + (i-'a');
        vector<int> v(3);
        v[0] = stoi(a_s);
        v[1] = stoi(b_s);
        v[2] = stoi(c_s);
        if(v[0] == v[1] && v[0] == v[2] ||
            v[0] + v[1] == v[2] ||
            v[1] + v[2] == v[0]) return true;
        return false;
            
            
        
    }
};