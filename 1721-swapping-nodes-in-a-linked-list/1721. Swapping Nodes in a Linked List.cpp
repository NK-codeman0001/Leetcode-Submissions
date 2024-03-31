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
   
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p1=head, *p2=head,*ch;
        int n=0;
        while(p1) {n++;
                  p1=p1->next;}
        p1=head;
        for(int i=1;i<k;i++) p1=p1->next;
        int l=n-k+1;
        for(int i=1;i<l;i++) p2=p2->next;
        int temp=p1->val;
        p1->val=p2->val;
        p2->val=temp;
        return head;
    }
};