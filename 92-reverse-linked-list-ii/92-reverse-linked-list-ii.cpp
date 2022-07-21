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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp = new ListNode(0), *pre = temp, *cur;
            temp->next = head;
            for (int i = 0; i < left - 1; i++){
                pre = pre->next;
            }
            cur = pre->next;
            for (int i = 0; i < right - left; i++){
                ListNode *temp2 = pre->next;
                pre->next = cur->next;
                cur->next = cur->next->next;
                pre->next->next = temp2;
            }
            return temp->next;
    }
};