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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }

        //checking if starting node are duplicates
        bool flag = 1;
        while(head -> next != NULL && head -> val == head ->next -> val){
            ListNode* delete1 = head;
            head = head -> next;
            delete delete1;
            flag = 0;
        }
        if(!flag)
            head  = head -> next;

        //recursive call because if all starting nodes are duplicates
        if(head != NULL && head -> next != NULL && head -> val == head -> next -> val){
            head = deleteDuplicates(head);
        }

        //again checking if all element is deleted
        if(head == NULL || head -> next == NULL)
            return head;

        
        ListNode* curr = head -> next;
        ListNode* prev = head;

        while(curr != NULL){
            //flag because if duplicates are there
            bool flag = 0;
            while(curr -> next != NULL && curr -> val == curr -> next -> val){
                ListNode* delete1 = curr;
                curr = curr -> next;
                delete delete1;
                flag = 1;
            }
            if(flag){
                ListNode* delete1 =curr;
                prev -> next = curr -> next;
                delete delete1;
                curr = prev -> next;
            }
            else{
                curr  = curr -> next;
                prev = prev -> next;
            }
        }
        return head;
        
    }
};
