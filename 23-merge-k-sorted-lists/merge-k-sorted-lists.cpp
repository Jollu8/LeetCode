
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& A) {
        if(A.empty()) return nullptr;
        auto ans = new ListNode(0);
        auto tmp = ans;
        priority_queue<pair<int , ListNode*> , vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> pq;
        for(auto h : A)if(h)pq.push({h->val, h});

        while(!pq.empty()) {
            auto cur = pq.top().second;
            pq.pop();
            if(cur->next) pq.push({cur->next->val, cur->next});
            tmp->next = cur;
            tmp = tmp->next;
        }
        return ans->next;
    }
};