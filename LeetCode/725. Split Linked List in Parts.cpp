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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;

        //finding total element of list
        int total = 0;
        ListNode* temp = head;
        while(temp){
            total++;
            temp = temp -> next;
        }

        //if list is not divided into equal parts
        int smallsize = total % k;

        temp = head;
        while(temp){
            //this is for dividing list in k parts
            int divide = (total / k )- 1;
            ListNode* head1 = temp;
            while(divide > 0 && head1){
                head1 = head1 -> next;
                divide--;
            }
            //previous size is greater than next size thats why 
            if(head1 && smallsize && (total/k) > 0){
                head1 = head1 -> next;
                smallsize--;
            }
            //if head1 point to NULL then runtime error occure
            if(!head1){
                ans.push_back(temp);
                temp = NULL;
                break;
            }
            //point next list for answer
            ListNode* next = head1 -> next;
            head1 -> next = NULL;
            ans.push_back(temp);
            temp = next;
        }    
        //if answer size is less than k parts this is condition that mention in question
        if(ans.size() < k){
            int val = k - ans.size();
            while(val--){
                ListNode* temp = new ListNode(0);
                ans.push_back(temp -> next);
            }
        }      
        return ans;
    }
};
