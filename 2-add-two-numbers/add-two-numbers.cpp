
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int cnt = 0) {
        // if(!l1) return l2;
        // if(!l2) return l1;
        ListNode* ans = new ListNode(0);
        auto tmp = ans;
        for (; l1 || l2; l1 = l1 ? l1->next : l1, l2 = l2 ? l2->next : l2) {
            cnt += (l1) ? l1->val : 0;
            cnt += (l2) ? l2->val : 0;

            // tmp->next = new ListNode(cnt % 10);
            tmp = tmp->next = new ListNode(cnt % 10);
            cnt /= 10;
        }
        if (cnt)
            tmp->next = new ListNode(cnt);
        return ans->next;
    }
};