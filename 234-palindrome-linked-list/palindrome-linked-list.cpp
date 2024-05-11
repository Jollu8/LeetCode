class Solution {
public:
    bool isPalindrome(ListNode* h) {
        auto slow = h;
        auto fast = h;

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        auto tmp = slow;
        ListNode *prev = nullptr;
        while(tmp){
            swap(prev, tmp->next);
            swap(prev, tmp);   
        }
        while(prev && h) {
            if(h->val != prev->val) return false;
            prev = prev->next;
            h = h->next;
        }
        return true;
    }
};
