class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) 
    {
        vector<int>power;

        for(int i=0;i<31;i++)
        {
            if((1<<i)&n)
            {
                power.push_back(1<<i);
            }
        }
        int mod=1e9+7;
        int m=power.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,1));

        for(int i=0;i<m;i++)
        {
            dp[i][i]=power[i];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                long long res=(dp[i][j-1])*((long long)power[j]);
                dp[i][j]=res%mod;
            }
        }


        vector<int>ans;
        for(auto it:queries)
        {
            long long prd=1;
            int left=it[0];
            int right=it[1];
            
            ans.push_back(dp[left][right]);
        }
        return ans;

        
    }
};