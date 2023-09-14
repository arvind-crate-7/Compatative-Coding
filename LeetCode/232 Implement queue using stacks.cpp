class MyQueue {
public:
    stack<int> s;
    stack<int> st;
public:
    MyQueue() {
    stack<int> s;
    stack<int> st;
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(s.empty()){
            return -1;
        }
        while(!s.empty()){
            st.push(s.top());
            s.pop();
        }
        int val = st.top();
        st.pop();
        while(!st.empty()){
            s.push(st.top());
            st.pop();
        }
        return val;
    }
    
    int peek() {
        if(!s.empty()){
            stack<int> temp;
            while(!s.empty()){
                temp.push(s.top());
                s.pop();
            }
            int val = temp.top();
            while(!temp.empty()){
                s.push(temp.top());
                temp.pop();
            }
            return val;
        }   
        return -1;
    }
    
    bool empty() {
        if(!s.empty()){
            return 0;
        }
        return 1;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

                            //another approach
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
    }
    
    void push(int x) {
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }

        s1.push(x);
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    
    int pop() {
        int temp = s2.top();
        s2.pop();
        return temp;
    }
    
    int peek() {
        return s2.top();
    }
    
    bool empty() {
        if(s2.empty())
            return true;
        return false;
    }
};
