class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    unordered_map<int,int> mpp;
    int n=bills.size();
    int change=0;
    for(int i=0;i<n;i++){
        mpp[bills[i]]++;
        
        if(bills[i]>5){
            change=bills[i]-5;
            
            if(change==5){
                if(mpp[5]>0){
                    mpp[5]--;
                }
                else{
                    return false;
                }
            }
            else{
                if(mpp[10]>0 and mpp[5]>0){
                    mpp[10]--;
                    mpp[5]--;
                }
                else if(mpp[5]>2){
                    mpp[5]--;
                    mpp[5]--;
                    mpp[5]--;
                }
                else{
                    return false;
                }  
            }
        }    
    }
    
    return true;
    
}
};