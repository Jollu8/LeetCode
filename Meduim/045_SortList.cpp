///// @Jollu
// 148. Sort List


#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <numeric>

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
    ListNode *sortList(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return head;
        vector<int> ans;
        int n = 0;
        ListNode *temp = head;
        while (temp != NULL) {
            n++;
            ans.push_back(temp->val);
            temp = temp->next;
        }
        sort(ans.begin(), ans.end());
        temp = head;
        for (int i = 0; i < ans.size(); i++) {
            temp->val = ans[i];
            temp = temp->next;
        }
        return head;
    }
};

int main() {

}