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
    ListNode* removeNodes(ListNode* head) {
        vector<ListNode*> vec;
        ListNode* temp=head;
        while(temp){
            vec.push_back(temp);
            temp=temp->next;
        }
        reverse(vec.begin(),vec.end());
        stack <ListNode*> st;
        for(auto i:vec){
            if(st.empty()) st.push(i);
            if(!st.empty() && i->val >= st.top()->val) st.push(i);
        }
        if(st.size()==0) NULL;
        head=st.top();
        ListNode* node =st.top();
        st.pop();
        while(st.size()){
        node->next = st.top();
        node=node->next;
            st.pop();
        }
        node->next=NULL;
        return head;
    }
};