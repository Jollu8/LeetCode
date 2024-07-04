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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*ans = new ListNode(0);
        auto *tmp = ans;
        int cur{};
        while(head) {
            if(head->val == 0) {
                tmp->next = new ListNode(cur);
                tmp = tmp->next;
                cur = 0;
            }else cur += head->val;
            head = head->next;
         }
         return ans->next->next;
    }
};