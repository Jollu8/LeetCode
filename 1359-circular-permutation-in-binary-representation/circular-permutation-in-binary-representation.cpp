class Solution {
public:
    vector<int> ans;
    void circular(int n,int& num){
        if(n==0){
            ans.push_back(num);
            return;
        }
        
        circular(n-1,num);
        num = num^(1<<(n-1));
        circular(n-1,num);
    }
    vector<int> circularPermutation(int n, int start) {
        int num = 0;
        circular(n,num);
        vector<int> answer;
        int idx = -1;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==start){
                idx = i;
                break;
            }
        }
        for(int i=idx;i<ans.size();i++){
            answer.push_back(ans[i]);
        }
        for(int i=0;i<idx;i++){
            answer.push_back(ans[i]);
        }
        return answer;
    }
};