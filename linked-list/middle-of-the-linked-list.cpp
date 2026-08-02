class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //slow an fast pointer(fast moves by 2 steps)
       ListNode* slow=head;
         ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next; //two steps
        }
        return slow;
    }
};