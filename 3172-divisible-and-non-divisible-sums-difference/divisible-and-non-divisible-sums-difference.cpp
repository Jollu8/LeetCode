class Solution {
public:
    int differenceOfSums(int n, int m) {
        int a{}, b{};
        for(int i = 1; i <= n; ++i) {
            if(i%m != 0) a += i;
            if(i%m == 0) b += i;
        }
      
        return a-b;
    }
};