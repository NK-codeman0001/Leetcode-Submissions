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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        bool flag=false;
        ListNode *p1=head,*p2=head->next;
        while(p2->next!=NULL && p2->next->next!=NULL ){
            p1=p1->next;
            p2=p2->next->next;
            if(p1==p2){
                flag=true;
                break;
            }
        }
        return flag;
        
    }
};