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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto ans = new ListNode(0);
        auto tmp = ans;
        int cnt{};
        while(l1 || l2) {
            cnt += (l1) ? l1->val : 0;
            cnt += (l2) ? l2->val : 0;
            tmp->next = new ListNode(cnt%10);
            cnt /= 10;
            tmp = tmp->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(cnt) tmp->next = new ListNode(cnt);
        return ans->next;
        
    }
};