ListNode* addTwoNumbers(ListNode* &l1, ListNode* &l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;

        //creating new linkelist
        ListNode* head = NULL;
        ListNode* tail = head;
        while(temp1 != NULL && temp2 != NULL){
            int sum = (temp1 -> val) + (temp2 -> val) + carry;
            carry =0;
            int val = sum % 10;
            ListNode* temp = new ListNode(val);
            if(tail == NULL){
                tail = temp;
                head = tail;
            }
            else{
                tail -> next = temp;
                tail = tail -> next;
            }
            carry = sum / 10;
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }

        while(temp1 != NULL){
            int sum = (temp1 -> val) + carry;
            carry = 0;
            int val = sum % 10;
            ListNode* temp = new ListNode(val);
            tail -> next = temp;
            tail = tail -> next;
            carry =  sum / 10;
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL){
            int sum = (temp2 -> val) + carry;
            carry = 0;
            int val = sum % 10;
            ListNode* temp = new ListNode(val);
            tail -> next = temp;
            tail = tail -> next;
            carry =  sum / 10;
            temp2 = temp2 -> next;
        }
        if(carry){
            ListNode* temp = new ListNode(carry);
            tail -> next = temp;
            tail = tail -> next;
        }
        return head;
    }
