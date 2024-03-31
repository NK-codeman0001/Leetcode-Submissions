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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1=headA,*p2=headB;
        int n1=0,n2=0;
        while(p1){
            p1=p1->next;
            n1++;
        }
        while(p2){
            p2=p2->next;
            n2++;
        }
        int k= abs(n1-n2);
        p1=headA;
        p2=headB;
        if(n1<n2) swap(p1,p2);
        while(k--) p1=p1->next;
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};