class Solution {
public:
    int countStudents(vector<int> &a, vector<int> &b) {
        std::deque<int> q;
        std::move(a.begin(), a.end(), std::back_inserter(q));
        for (int i = 0; i < b.size();) {
            int n = 0;
            while (n < a.size() && b[i] != q.front()) {
                auto tmp = q.front();
                q.pop_front();
                q.push_back(tmp);
                ++n;
            }
            if (n == a.size())
                break;
            ++i;
            q.pop_front();
        }
        return q.size();
    }
};
