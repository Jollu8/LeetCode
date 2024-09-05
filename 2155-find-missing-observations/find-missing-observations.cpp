class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
      int m= rolls.size();
      cout<<m<<endl;
      int rollSum=0;
      vector<int>ans;
      for(int i=0; i<m; i++){
        rollSum+=rolls[i];
      }
      cout<<rollSum<<endl;
      int nSum= (mean*(m+n))-rollSum;
      if(6*n<nSum || nSum<1*n || nSum<0){
        return ans;
      }

      int nAvg=nSum/n;
      int rem= nSum%n;
      for(int i=0; i<n; i++){
       ans.push_back(nAvg);
      }
      for(int i=0; i<rem; i++){
        ans[i]++;
      }
       return ans;
    }
};