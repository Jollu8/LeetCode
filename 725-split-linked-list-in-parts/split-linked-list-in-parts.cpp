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
    std::vector<ListNode *> splitListToParts(ListNode *head, int k) {
        std::vector<ListNode *> ans(k, nullptr);

        int len = 0;

        for (ListNode* node = head; node; node = node->next)
        len++;

        int n = len / k, r = len % k;
        ListNode *node = head, *prev = nullptr;

        for (auto i = 0; node && i < k; i++, r--) {
            ans[i] = node;
            for (auto j = 0; j < n + (r > 0); j++) {
                prev = node;
                node = node->next;
            }
            if (prev) prev->next = nullptr;
        }
        return ans;
    }
};
