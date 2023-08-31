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
private:
    void reverse(ListNode* &head){
        ListNode* curr = head;
        ListNode* forword = curr;
        ListNode* prev = NULL;

        while(curr != NULL){
            forword = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forword;
        }
        head = prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        reverse(l1);
        reverse(l2);

        int carry = 0;
        string str;

        ListNode* ans = l1;
        ListNode* temp = l2;
        while(l1 && l2){
            int val = l1 -> val + l2 -> val + carry;
            int sum = val % 10;
            carry = val / 10;

            char ch = sum + '0';
            str = str + ch;

            l1 = l1 -> next;
            l2 = l2 -> next;
        }

        while(l1){
            int val = l1 -> val  + carry;
            int sum = val % 10;
            char ch = sum + '0';
            carry = val / 10;
            str = str + ch;
            l1 = l1 -> next;
        }

        while(l2){
            ans = temp;
            int val = l2 -> val + carry;
            int sum = val % 10;
            char ch = sum + '0';
            carry = val / 10;
            str = str + ch;
            l2 = l2 -> next;
        }

        if(carry){
            char ch = carry + '0';
            str = str + ch;
        }
        temp = ans;
        ListNode* prev;
        int i = str.size() - 1;
        for(;i >= 0 && temp;i--){
            temp -> val = str[i] - '0';
            prev = temp;
            temp = temp -> next;
        }
        if(i == 0){
            ListNode* temp2 = new ListNode(str[0] - '0');
            prev -> next = temp2;
        }
        
        return ans;
        
    }
};
