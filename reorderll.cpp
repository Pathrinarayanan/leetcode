class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *fast = head, *slow =head, *prev = head;
        if(head == NULL || head->next==NULL) return;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        } 
        prev->next = NULL;
        ListNode *l2 = reverse(slow);
        merge(head, l2);
    }
    ListNode *reverse(ListNode *head){
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
    
void merge(ListNode *l1, ListNode *l2){
    ListNode *l1next , *l2next;
    while(l1 !=NULL){
        l1next = l1->next;
        l2next = l2->next;
        l1->next = l2;
        if(l1next ==NULL) break;
        
        l2->next = l1next;
        l1 = l1next;
        l2 = l2next;
    }
}
};
