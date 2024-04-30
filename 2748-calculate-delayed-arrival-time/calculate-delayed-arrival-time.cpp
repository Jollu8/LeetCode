class Solution {
public:
    int findDelayedArrivalTime(int a, int b) {
        a += b;
        if(a == 24) return 0;
        if(a > 24) return a %24;
        return a;
        
    }
};