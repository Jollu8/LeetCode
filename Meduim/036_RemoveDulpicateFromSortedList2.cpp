///// @Jollu
// 82. Remove Duplicates from Sorted List II

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
ListNode* deleteDuplicates(ListNode* head) {
    ListNode **runner = &head;

    if(!head || !head->next)return head;

    while(*runner)
    {
        if((*runner)->next && (*runner)->next->val == (*runner)->val)
        {
            ListNode *temp = *runner;
            while(temp && (*runner)->val == temp->val)
                temp = temp->next;

            *runner = temp;
        }
        else
            runner = &((*runner)->next);
    }

    return head;
}
};


int main() {
    Solution s;


}
