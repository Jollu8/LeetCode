class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights.size());
        expected = heights;
        for(int i = 0; i < heights.size() - 1; i++){
            for(int j = i + 1; j < heights.size(); j++){
                if(expected[i] > expected[j]){
                    int temp = expected[i];
                    expected[i] = expected[j];
                    expected[j] = temp;                     
                }
            }
        }
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != expected[i]){
                count++;
            }
        }
        return count;

        
    }
};