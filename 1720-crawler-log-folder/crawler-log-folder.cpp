class Solution {
public:
    static int minOperations(vector<string>& logs) {
        int level {};
        for(auto& dir: logs){
            if (dir=="../")     level-=(level>0);
            else if (dir!="./") level++;
        }
        return level;
    }
};

