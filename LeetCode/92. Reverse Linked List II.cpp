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
    ListNode* reverseBetween(ListNode* &head, int left, int right) {
        if(!head || !head -> next){
            return head;
        }

        ListNode* left1;
        ListNode* right1;
        ListNode* temp = head;
        left--;
        right--;
        int cnt = 0;
        ListNode* leftpart = NULL;
        while(cnt < left){
            leftpart = temp;
            temp = temp -> next;
            cnt++;
        }
        left1 = temp;
        while(cnt < right){
            temp = temp -> next;
            cnt++;
        }
        right1 = temp;
        ListNode* rightpart = right1 -> next;

        ListNode* curr = left1;
        ListNode* prev = rightpart;

        while(curr != rightpart){
            ListNode* forword = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forword;
        }
        if(leftpart){
            leftpart -> next = right1;
            return head;
        }
        return right1;

    }
};


                                    //Aproach 2
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)   return NULL;
        if(!head->next) return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;

        for(int i = 0; i < left - 1; i++)    prev = prev->next;
        ListNode *curr = prev->next;

        for(int i = 0; i < right - left; i++)
        {
            ListNode *forw = curr->next;
            curr->next = forw->next;
            forw->next = prev->next;
            prev->next = forw;
        }
        return dummy->next;

        
        
    }
};
