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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(int i =0;i<lists.size();i++){
            ListNode* head = lists[i];
            while(head != NULL){
                v.push_back(head -> val);
                head = head -> next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* ans = new ListNode(-1);
        ListNode* anshead = ans;
        for(int i = 0;i<v.size();i++){
            ListNode* temp = new ListNode(v[i]);
            ans -> next = temp;
            ans = temp;
        }
        return anshead -> next;
    }
};
