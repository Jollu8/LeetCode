class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
         for (int i = 1; i <= n; i++) {
            q.push(i);
        }

        while (q.size() > 1) {
            int tmp = k;
            while (tmp > 1) {
                q.push(q.front());
                q.pop();
                tmp--;
            }
            q.pop();
        }
        cout << q.size();
        return q.front() ;
    }
};