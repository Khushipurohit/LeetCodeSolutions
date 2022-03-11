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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp = head, *ptr = head;
        
        if(head == NULL)
            return NULL;
			
        if(head -> next == NULL)
            return head;
        
        int count = 1;
    
        while(temp->next != NULL)
        {
            temp = temp -> next;
            count++;
        }
		
        k = k % count;
        
        while(k--)
        {
            while(temp->next != NULL)
                temp = temp -> next;
        
            temp -> next = head;        
            
            head = temp;
            ptr = temp;
			
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            
            temp -> next = NULL;
			
            temp = ptr;
            
        }
        return head;
    }
};