class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }            
            else{
                return slow;
            }
        }
        return slow;
    }
};
