// Solution 1 - Without stack
class Solution {
public:
    // Function to reverse the LL
    ListNode *reverse(ListNode *head){
        ListNode *curr = head, *prev = NULL, *forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        // Check for edge cases
        if(head->next == NULL || head->next->next == NULL)
            return;

        // Step 1 - Find middle of the LL with slow-fast pointer approach
        ListNode *slow = head, *fast = head, *slow_prev = NULL;
        while(fast != NULL && fast->next != NULL){
            slow_prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2 - Split the LL into 2 parts from the middle 
        // and reverse the second part
        ListNode *h1 = head, *h2;
        if(fast == NULL){
            h2 = reverse(slow);
            slow_prev->next = NULL;
        }
        else{
            h2 = reverse(slow->next);
            slow->next = NULL;
        }
        
        // Traverse both the LL while linking heads of both LL
        ListNode *next1 = h1->next, *next2 = h2->next;
        while(h1 != NULL && h2 != NULL){
            next1 = h1->next;
            next2 = h2->next;

            h1->next = h2;
            h2->next = next1;

            h1 = next1;
            h2 = next2;
        }
    }
};

// Solution 2 - With stack
class Solution {
public:
    void reorderList(ListNode* head) {
        // base case
        if(head->next == NULL || head->next->next == NULL) 
            return ;
        
        // Step 1 - Find middle of the LL with slow-fast pointer approach
        ListNode* slow= head,  *fast= head;
        stack<ListNode*> st;
        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast = fast->next->next;
        }
        
        // Step 2 - Split the LL into 2 parts from the middle
        ListNode* h2;
        if(fast != NULL)
            h2 = slow->next;    
        else 
            h2 = slow;
        
        // Step 3 - Push the second LL into a stack so that the last element remains at top
        while(h2!=NULL){
            st.push(h2);
            h2 = h2->next;  
        }
        fast = head;
        
        // Step 4 - Link the first node with the last node and then pop the stack
        while(st.size()){ 
            h2 = fast->next; 
            fast->next = st.top();
            st.top()->next = h2;
            fast = h2;
            st.pop();    
        }

        slow->next = NULL;
    }
};

// Solution 3 - Recursion
class Solution {
public:
    void reorderList(ListNode* head) {
        //base case
        if(head!=NULL || head->next!=NULL || !head->next->next!= NULL) 
            return;
        
        //Find the penultimate node i.e second last node of the linkedlist
        ListNode* penultimate = head;
        while (penultimate->next->next) 
            penultimate = penultimate->next;
        
        // Link the penultimate node with the second node
        penultimate->next->next = head->next;
        head->next = penultimate->next;
        
        // Set the penultimate to the the last 
        penultimate->next = NULL;
        
        // Recursive call
        reorderList(head->next->next);
    }
};
