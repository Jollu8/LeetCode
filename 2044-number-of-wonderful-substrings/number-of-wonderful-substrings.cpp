class Solution {
public:
    int getHash(char &c) {
        return 1<<(c-'a');
    }
    long long wonderfulSubstrings(string word) {
        unordered_map<int,int> count={{0,1}};
        unordered_set<char> usedChars;
		int running=0;
        long long result=0;
        for(char &w:word) {
            running^=getHash(w);

            usedChars.insert(w);
      
            for(char c:usedChars)
                result+=count[running^getHash(c)];
            result+=count[running]++;
        }
        return result;
    }
};