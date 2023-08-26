/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 1-2-3-4-5, n = 1
 
 1-2, n = 2
 
 1, n = 1
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *fast = head; 
        ListNode *slow = head;
        
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        
        
        if (fast == nullptr)
        {
            head = head->next;
            return head;
        }
        
        while (fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        // fast = slow->next;
        slow->next = slow->next->next;
        
        // free(fast);
        
        return head;
    }
};


                                        //approach 2

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head -> next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        int total = 0;
        while(temp != NULL){
            total++;
            temp = temp -> next;
        }
        if(total == n){
            head = head -> next;
            return head;
        }
        int index = total - n;

        temp = head;
        int i = 0;
        while(i <index -1){
            temp = temp -> next;
            i++;
        }
        ListNode* delete1 = temp -> next;
        temp -> next = temp -> next -> next;
        return head;
        
    }
};
