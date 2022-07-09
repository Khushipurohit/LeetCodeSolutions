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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *list3, *temp; 
        list3 = new ListNode(); //creating an empty LL
        temp = list3; //storing head of list3 as temp and then traversing
 
        while(list1 && list2){ //jb tk ye NULL ni h 
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
             else {
               temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
           
         
       
        if(list1) temp->next = list1;
        if(list2) temp->next = list2;
     
        return list3->next;
    }
};