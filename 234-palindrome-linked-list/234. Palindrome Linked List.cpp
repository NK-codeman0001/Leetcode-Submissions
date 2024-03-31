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
    ListNode * reverse(ListNode* head){
        ListNode *prev=NULL,*nxt=head;
        while(head){
            nxt=nxt->next;
            head->next=prev;
            prev=head;
            head=nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        int l=0;
        ListNode* p1=head,*p2=head;
        while(p1->next && p1->next->next ){
            p1=p1->next->next;
            p2=p2->next;
        }
        p2=p2->next;
        p2=reverse(p2);
        p1=head;
        bool flag = true;
        while(p2){
            if(p2->val!=p1->val){
                flag=false;
                break;
            }
            p2=p2->next;
            p1=p1->next;
        }
        return flag;
    }
};