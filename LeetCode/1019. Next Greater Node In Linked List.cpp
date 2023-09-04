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
    vector<int> nextLargerNodes(ListNode* head) {
        //step 1 finding size of the list
        int total = 0;
        ListNode* temp = head;
        while(temp){
            total++;
            temp = temp -> next;
        }
        vector<int> ans(total);

        //if list have only one element 
        if(!head ->next){
            ans[0] = 0;
            return ans;
        }

        //initilizing variable
        stack<int> st;
        stack<int> index;
        int i = 0;

        //step 2 inserting next greater element
        while(head && head -> next){

            //if we found next greater element 
            if(head -> val < head -> next -> val){
                ans[i] = head -> next -> val;

                //checking element next greater element is greater than prev stack element
                while(!st.empty()){
                    if(st.top() < head -> next -> val){
                        ans[index.top()] = head -> next -> val;
                        index.pop();
                        st.pop();
                    }
                    else{
                        break;
                    }
                }
            }
            //if next element is less than or equal to the current element
            else{
                st.push(head -> val);
                index.push(i);
            }

            i++;
            head = head -> next;
        }
        //for last element
        ans[i] = 0;
        return ans;
        
    }
};
