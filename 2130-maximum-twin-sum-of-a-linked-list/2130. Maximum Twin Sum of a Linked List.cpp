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
    ListNode* rev(ListNode* &node){
        ListNode* prev=NULL,*cur=node,*nxt;
        while(cur){
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode *p1=head,*p2=head;
        int n=0;
        while(p1){
            p1=p1->next;
            n++;
        }
        p1=head;
        int l1=(n/2) -1 ;

        while(l1--){
            p2=p2->next;
        }
        p2->next=rev(p2->next);
        p2=p2->next;
        
        while(p2){
        p1->val=p1->val + p2->val;
        p1=p1->next;
        p2=p2->next;
        }
        p1=head;
        int ans=0;
        for(int i=1;i<=n/2;i++){
            ans=max(p1->val,ans);
            p1=p1->next;
        }
        return ans;
        
    }
};