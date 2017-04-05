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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp=0;
        ListNode* tail=new ListNode(0);
        ListNode* ans=tail;
        while (l1!=NULL||l2!=NULL)
        {
            int v1=0,v2=0;
            if (l1!=NULL)
            {
                v1=l1->val;
                l1=l1->next;
            }
            if (l2!=NULL)
            {
                v2=l2->val;
                l2=l2->next;
            }
            v1=v1+v2;
            tail->next=new ListNode((v1+temp)%10);
            temp=(v1+temp)/10;
            tail=tail->next;
        }
        if (temp!=0)
        {
            tail->next=new ListNode(1);
        }
        return ans->next;
    }
};
