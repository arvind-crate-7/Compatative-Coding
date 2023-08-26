class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n  = nums.size();
        int sum;
        if(n % 2 == 0){
            sum = (n+1)/2*(n+1);
        }
        else{
            sum = (n+1)/2*(n);
        }

        int sum2 = 0;
        for(int i = 0;i<n;i++){
            sum2 = sum2 + nums[i];
        }
        return sum - sum2;
        
    }
};
