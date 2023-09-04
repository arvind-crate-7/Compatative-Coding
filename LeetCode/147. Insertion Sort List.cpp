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
    ListNode* insertionSortList(ListNode* head) {
        if(head -> next == NULL){
            return head;
        }
        ListNode* dummy = new ListNode(INT_MIN);
        dummy -> next = head;
        head = dummy;
        ListNode* curr = head -> next ;
        while(curr != NULL && curr -> next != NULL){
            ListNode* temp = head -> next;
            ListNode* prev = head;
            ListNode* forword = curr -> next -> next;
            bool flag = 0;
            while(temp != curr -> next ){
                if(temp -> val > curr -> next -> val){
                    curr -> next -> next = temp;
                    prev -> next = curr -> next;
                    curr -> next = forword;
                    flag = 1;
                    break;
                }
                else{
                    prev = temp;
                    temp = temp -> next;
                }
            }
            if(!flag){
                curr = curr -> next;
            }

        }
        return head -> next;
        
    }
};
