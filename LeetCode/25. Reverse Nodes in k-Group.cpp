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
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        int total = 0;
        while(temp != NULL){
            total++;
            temp = temp -> next;
        }
        if(head == NULL || total < k){
            return head;
        }
        ListNode* curr = head;
        ListNode* forword = NULL;
        ListNode* prev = NULL;
        int cnt = 0;
        while(curr!= NULL && (cnt<k)){
            forword = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forword;
            cnt++;
        }
        if(forword != NULL){
            head -> next = reverseKGroup(forword,k);
        }
        return prev;
        
    }
};
