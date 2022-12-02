
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode();
        ListNode *tempdummy = dummy;
        ListNode *temp1 = list1, *temp2 = list2;
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val < temp2->val){
                ListNode *newnode = new ListNode(temp1->val);
                tempdummy->next = newnode;
                tempdummy  = tempdummy->next;
                temp1 = temp1->next;
            }
            else{
                 ListNode *newnode = new ListNode(temp2->val);
                tempdummy->next = newnode;
                tempdummy  = tempdummy->next;
                temp2 = temp2->next;
            }
        }
        while(temp1!=NULL){
             ListNode *newnode = new ListNode(temp1->val);
                tempdummy->next = newnode;
                tempdummy  = tempdummy->next;
                temp1 = temp1->next;
        }
        while(temp2 !=NULL){
             ListNode *newnode = new ListNode(temp2->val);
                tempdummy->next = newnode;
                tempdummy  = tempdummy->next;
                temp2= temp2->next;
        }
        return dummy->next;
    }
};
