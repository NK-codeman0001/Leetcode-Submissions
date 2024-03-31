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
    ListNode *detectCycle(ListNode *head) {
               //make two pointers slow and fast
        ListNode* slow=head;
        ListNode* fast=head;
		
		/*iterate over the list until fast reaches end
		note if the list contains any loop this condition will never get true*/
		
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;                                    //slow pointer moves one position at a time
            fast=fast->next->next;                              //fast pointer moves two position at a time
			
		/*if there is a loop slow and fast will surely meet at some point within the loop becasue of the fact
		that slow is moving with speed 1 and fast is moving with speed 2 which means fast enters the loop before
		slow does and by the time slow enters the loops fast will already be iterating within the cycle. When both
		fast and slow are in the loop the distance between them starts to increase by 1 position. Now as soon
		as the distance between them becomes equal to the cycle length they meet*/
		
            if(slow==fast)
                break;                                          //if slow and fast meets then break out of the loop
        }
		
	    //if slow and fast didn't meet and we came out beacuse of no loop condition then return NULL
        if(fast==NULL||fast->next==NULL)
            return NULL;
			
		/*now place any pointer out of slow and fast at the beginning of the list and iterate over the list
		again by moving both the pointers by one position at a time until they meet again. This is the
		starting point of the loop, return it*/
		
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
		
        return slow;                                            //you can also return fast
}
};