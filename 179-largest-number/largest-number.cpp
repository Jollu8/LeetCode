     int myComp(string x, string y) {
    string xy = x.append(y);
    string yx = y.append(x);

    return xy.compare(yx) > 0 ? 1 : 0;
}


class Solution {

   
public:    
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        string ans = "";
        
        for (int num : nums) temp.push_back(to_string(num));
        sort(temp.begin(), temp.end(), myComp);
        
        for (auto& s : temp) ans += s;
        if (ans[0] == '0') return "0";
        return ans;
    }
};