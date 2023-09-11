class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<int> v;
        int size = groupSizes.size();

        for(int i = 0;i<size;i++){
            v.push_back(groupSizes[i]);
        }
        sort(v.begin(),v.end());

        //initiliding answer
        vector<vector<int>> ans;
        int prev = 0;
        for(int i = 0;i<size;i++){
            int val = v[i];
            prev = val;
            vector<int> temp;
            for(int  j= 0;j<size;j++){
                if(groupSizes[j] == val && temp.size() < val){
                    temp.push_back(j);
                    groupSizes[j] = 0;
                    i++;
                }
                if(temp.size() >= val)
                    break;
            }
            ans.push_back(temp);
            i--;
        }
        return ans;
    }
};
