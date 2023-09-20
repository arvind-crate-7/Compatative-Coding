class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
   vector<int> nge;
    stack<int> st;

    for (int i = nums2.size() - 1; i >= 0; i--) { // Corrected loop condition
        while (!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }
        if (st.empty()) {
            nge.push_back(-1);
        } else {
            nge.push_back(st.top());
        }
        st.push(nums2[i]);
    }

    reverse(nge.begin(), nge.end());
    
    // Now, we need to create a mapping from elements in nums2 to their next greater elements
    unordered_map<int, int> ngeMap;
    for (int i = 0; i < nums2.size(); i++) {
        ngeMap[nums2[i]] = nge[i];
    }

    vector<int> result;
    for (int num : nums1) {
        result.push_back(ngeMap[num]);
    }
    
    return result;
    }
};

                                                //Another approach
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0;i<nums1.size();i++){
            int val = nums1[i];
            int j = 0;
            int nextG = -1;
            bool flag = 0;
            for(;j<nums2.size();j++){
                if(val == nums2[j]){
                    for(int k = j +1;k<nums2.size();k++){
                        flag = 1;
                        if(val < nums2[k]){
                            nextG = nums2[k];
                            break;}
                    }
                }   
                if(flag)
                        break;
            }
            ans.push_back(nextG);
        }   
        return ans;
    }
};
