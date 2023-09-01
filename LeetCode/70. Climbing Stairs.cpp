class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n== 2){
            return n;
        }
        stack<int> st;
        st.push(1);
        st.push(2);

        for(int i = 2;i<n;i++){
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();

            int top = val1 + val2;

            st.push(val1);
            st.push(top);
        }
        return st.top();
    }
};
