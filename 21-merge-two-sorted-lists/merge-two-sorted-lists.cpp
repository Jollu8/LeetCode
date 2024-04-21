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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        auto ans = new ListNode(0);
        auto tmp =ans;

        while(l1 && l2) {
            if(l1->val < l2->val) {
                tmp->next = new ListNode(l1->val);
                l1 = l1->next;
            }else{
                tmp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            tmp = tmp->next;
        }
        if(l1) tmp->next = l1;
        if(l2) tmp->next = l2;
        return ans->next;
    }
};