/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int> > spiralMatrix(int m, int n, ListNode *h) {
        std::vector ans(m, std::vector<int>(n));
        int top{}, buttom = m - 1;
        int left{}, right = n - 1;

        while (top <= buttom && left <= right) {
            for (int j = left; j <= right; ++j) {
                if(!h)ans[top][j] = -1;
                else{
                    ans[top][j] = h->val;
                    h = h->next;
                }
            }
            ++top;

            for (int i = top; i <= buttom; ++i) {
                if(!h) ans[i][right] = -1;
                else {
                    ans[i][right] = h->val;
                    h = h->next;
                }
            }
            --right;

            if (top <= buttom) {
                for (auto j = right; j >= left; --j) {
                    if(!h)ans[buttom][j] = -1;
                    else{
                        ans[buttom][j] = h->val;
                        h = h->next;
                    }
                }
                buttom--;
            }
            if (left <= right) {
                for (auto i = buttom; i >= top; --i) {
                    if(!h) ans[i][left] = -1;
                    else{
                        ans[i][left] = h->val;
                        h = h->next;
                    }
                }
                ++left;
            }
        }
        return ans;
    }
};