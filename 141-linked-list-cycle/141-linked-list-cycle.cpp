/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        
        ListNode *front = head;
        ListNode *rear = head;
        
        while(front != NULL && front ->next != NULL)
        {
            front = front->next->next;
            rear = rear->next;
            
            if(front == rear)
                return true;
        }
    
        return false; 
    }
};