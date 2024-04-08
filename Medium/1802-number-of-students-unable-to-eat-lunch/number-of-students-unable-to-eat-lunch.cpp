class Solution {
public:
    int countStudents(vector<int>& a, vector<int>& b) {
        queue<int> q;
        for (auto i : a)
            q.push(i);

        for (int i = 0; i < b.size();) {
            int n = 0;
            while (n < a.size() && b[i] != q.front()) {
                auto tmp = q.front();
                q.pop();
                q.push(tmp);
                ++n;
            }
            if (n == a.size())
                break;
            ++i;
            q.pop();
        }
        return q.size();
    }
};
