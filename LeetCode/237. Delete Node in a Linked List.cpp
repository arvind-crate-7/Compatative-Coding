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
    void deleteNode(ListNode* node) {
        node->val = node->next->val; //copying the next node value
        node->next = node->next->next; // deleting the next node
    }
};



                //approach 2


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
    void deleteNode(ListNode* node) {
        ListNode* temp = node;

        ListNode* prev;
        while(temp -> next != NULL){
            temp -> val = temp -> next -> val;
            prev = temp;
            temp = temp -> next;
        }

        prev -> next = NULL;
        delete(temp);
        


        
    }
};
