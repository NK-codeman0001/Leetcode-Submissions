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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p1=list1,*p2=list1,*p3=list2;
        for(int i=1;i<a;i++) p1=p1->next;
        for(int i=1;i<=b+1;i++) p2=p2->next;
        while(p3->next) p3=p3->next;
        // p2->next=NULL;
        p1->next=list2;
        p3->next=p2;
        return list1;        
    }
};