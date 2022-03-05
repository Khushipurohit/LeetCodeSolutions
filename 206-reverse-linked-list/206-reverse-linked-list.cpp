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
    ListNode* reverseList(ListNode* head) {
        ListNode *s, *t, *r;
        //ListNode *q = head;
        if(head == NULL){
            return head;
        }
        t= head;
        s= NULL;
       // s->next = NULL;
        while(t!= NULL){
            r=t->next;
            t->next=s;
            s=t;
            t=r;
        }
        head=s;
        return head;
    }
};