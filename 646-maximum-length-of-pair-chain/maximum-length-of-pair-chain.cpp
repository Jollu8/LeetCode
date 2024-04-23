class Solution {
public:
    int findLongestChain(vector<vector<int>>& a) {
        sort(a.begin(), a.end(), [](auto &i, auto &j) {return i[1]< j[1];});
        int p{}, ans=1;
        for(int i =1; i < a.size(); ++i) {
            if(a[p][1] < a[i][0]) p = i, ++ans;
        }
        return ans;
        
    }
};