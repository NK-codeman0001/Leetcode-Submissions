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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prev=head,*cur=head;
        int len=0;
        while(prev){
            len++;
            prev=prev->next;
        }
        prev=cur;
        // if(len==1) return head=NULL;
        if(len==n) return head=head->next;
        for(int i=0;i<len-n;i++) {
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
        return head;
    }
};