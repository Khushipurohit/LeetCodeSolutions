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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> list;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                list.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
         if(list.size()==0)
           return NULL;
        sort(list.begin(),list.end());
        ListNode *head= new ListNode(list[0]);
        ListNode* ans = head;
        for(int i=1;i<list.size();i++)
        {
            ListNode *neww= new ListNode(list[i]);
            head->next=neww;
            head=head->next;
        }
        return ans;
    }
};