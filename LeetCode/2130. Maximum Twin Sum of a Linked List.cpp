class Solution {
public:
	int pairSum(ListNode* head) 
	{
		stack<int> st;
		ListNode* slow = head;
		ListNode* fast = head;

		while(fast != NULL)
		{
			st.push(slow -> val);
			slow = slow -> next;
			fast = fast -> next -> next; 
		}

		int ans = INT_MIN;
		while (slow != NULL)
		{
			int temp = st.top() + slow -> val;
			ans = max(ans, temp);
			slow = slow -> next;
			st.pop();
		}

		return ans;
	}
};

									//Another method
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
    int pairSum(ListNode* head) {
        ListNode* head2;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next ->next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        head2 = slow -> next;
        slow -> next = NULL;
        
        //reversing second list
        ListNode* curr = head2;
        ListNode* forword = curr;
        ListNode* prev = NULL;
        while(curr){
            forword = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forword;
        }
        head2 = prev;
        int maxpair = 0;
        while(head2){
            int val = head -> val + head2 -> val;
            maxpair = max(maxpair,val);
            head2 = head2 -> next;
            head = head -> next;
        }
        return maxpair;
    }
};
