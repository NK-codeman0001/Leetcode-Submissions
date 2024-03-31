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
    ListNode* removeZeroSumSublists(ListNode* head) {
    ListNode * tmp = new ListNode(0);
    tmp->next=head;
        for(ListNode *i = tmp;i;i=i->next){
            int sum =0;
            for(ListNode * j= i->next;j;j= j->next){
                sum+=j->val;
                if(sum==0){
                    i->next=j->next;
                }
                
            }
        }
        return tmp->next;
//         ListNode* tmp =head->next,*prev=head,*tmp2=head->next->next;
//         int sum=head->val;
//         while(tmp){
            
//             if(prev->next->val + tmp2->val ==0) {
//                 sum= sum-prev->next->val - tmp2->val; 
//                 prev->next=tmp2->next;
//             }
//             if(sum==0){
//                 head=tmp->next;
//             }
//             tmp=tmp->next;
//             prev=prev->next;
//         }
//         return head;
    }
};