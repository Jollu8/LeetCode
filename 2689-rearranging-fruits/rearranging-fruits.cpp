class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>mp;
        unordered_map<int,int>b1;
        unordered_map<int,int>b2;
        int n = basket1.size();
        for(int i=0;i<n;i++){
            mp[basket1[i]]++;
            mp[basket2[i]]++;
            b1[basket1[i]]++;
            b2[basket2[i]]++;
        }
        int mi = *min_element(basket1.begin(),basket1.end());
        int z = *min_element(basket2.begin(),basket2.end());
        mi = min(mi,z);
        for(auto ele:mp){
            if(ele.second%2==1) return -1;
        }
        long long ans = 0;
        vector<int>s1;
        vector<int>s2;
        for(auto ele:b1){
            int x = mp[ele.first];
            int y = ele.second;
            x = x/2;
            if(y>x){
                for(int i=0;i<y-x;i++){
                    s1.push_back(ele.first);
                }
            }
        }
        for(auto ele:b2){
            int x = mp[ele.first];
            int y = ele.second;
            x = x/2;
            if(y>x){
                for(int i=0;i<y-x;i++){
                    s2.push_back(ele.first);
                }
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.rbegin(),s2.rend());
        int p = s1.size();
        for(int i=0;i<s1.size();i++){
            ans += min({s1[i],s2[i],2*mi});
        }
        return ans;
    }
};