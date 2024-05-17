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
    bool isPalindrome(ListNode* h) {
        auto slow = h;
        auto fast = h;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* prev = nullptr;
        while(slow) {
            swap(prev, slow->next);
            swap(slow, prev);
        }

        while(prev && h) {
            if(h->val != prev->val) return false;
            prev = prev->next;
            h = h->next;
        }
        return true;
        
    }
};