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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return list1;
        else if(list1==NULL && list2) return list2;
        else if(list2==NULL && list1) return list1;
        ListNode *l1,*l2,*ans;
        if(list1->val<=list2->val){
            l1=list1;
            l2=list2;
        }
        else{
            l2=list1;
            l1=list2;
        }
        ans=l1;
        while(l1->next){
            if(l1->next->val > l2->val){
                ListNode *temp=l1->next;
                l1->next=l2;
                l2=temp;
                l1=l1->next;
            }
            else{
                l1=l1->next;
            }
        }
        if(l2){
            l1->next=l2;
        }
        return ans;
    }
};