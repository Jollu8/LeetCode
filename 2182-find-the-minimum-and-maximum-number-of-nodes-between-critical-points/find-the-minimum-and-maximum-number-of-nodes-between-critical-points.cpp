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
    
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1, prev = -1, curr = -1;
        int pos = 2;
        int mn = INT_MAX, mx = INT_MIN;
        ListNode* p = head->next;
        ListNode* q = head;

        while(p->next){
            // check for critical point
            if((p->val>q->val && p->val>p->next->val) || (p->val<q->val && p->val<p->next->val)){
                if(first==-1){
                    first = pos;
                    prev = pos;
                }
                else{
                    curr = pos;
                    mn = min(mn,curr-prev);
                    mx = curr-first;
                    prev = pos;
                }
            }
            pos++;
            p = p->next;
            q = q->next;
        }

        if(curr==-1){
            return {-1,-1};
        }
        return {mn,mx};
    }
};