class Solution {
public:
    int maxw;
    int backtrack(int ind,vector<vector<int>>&books,int k, vector<vector<int>>&dp,int h)
    {
        if(ind>=books.size()) return h;
        if(dp[ind][k]!=-1) return dp[ind][k];
        
        if(books[ind][0]<=k)
        {
            int pick=backtrack(ind+1,books,k-books[ind][0],dp,max(h,books[ind][1]));
            int nonpick=h+backtrack(ind+1,books,maxw-books[ind][0],dp,books[ind][1]);
            return dp[ind][k]=min(pick,nonpick);
        }
        return dp[ind][k]=h+backtrack(ind+1,books,maxw-books[ind][0],dp,books[ind][1]);
    }
    int minHeightShelves(vector<vector<int>>& books, int k) {
        int n=books.size();
        maxw=k;
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return backtrack(0,books,k,dp,0);
    }
};