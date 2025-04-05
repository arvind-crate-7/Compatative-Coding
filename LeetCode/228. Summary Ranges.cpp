class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> result;
        if(nums.size()<1){
            return result;
        }
        int i = 0,val = nums[0],index = 0;
        for( ;i<nums.size();i++){
             val = nums[i];
             index = i;
            i++;
            for(;i<nums.size();i++){
                if((nums[i-1]+1 )<nums[i]){
                    if((i-1)!=(index)){
                        string temp ;
                        temp +=to_string(val);
                        temp +="->";
                        temp +=to_string(nums[i-1]); 
                        result.push_back(temp);
                        break;
                    }
                    else if(nums[i] == (nums[i-1] +1)){
                        continue;
                    }
                    else{
                        string temp ;
                        
                        temp += to_string(val);
                        result.push_back(temp);
                        break;
                    }
                }
            }
            i--;
        }
        int k = i-1;
        if(val==nums[k]){
            string temp ;
                        
            temp += to_string(val);
            result.push_back(temp);
        }
        else{
            string temp ;
                        temp +=to_string(val);
                        temp +="->";
                        temp +=to_string(nums[i-1]); 
                        result.push_back(temp);
        }
        return result;
    }
};
