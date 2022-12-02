class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *nextnode = head, *curr = head;
        
        while(curr!=NULL){
            nextnode = curr->next;
            curr->next =prev;
            prev = curr;
            curr= nextnode;
        }
        return prev;
    }
};
