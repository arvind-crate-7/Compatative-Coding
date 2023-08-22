int singleNumber(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    sort(nums.begin(),nums.end());
    int j = 0;
    int val;
    bool flag = 1;
    for(int i = 1;i<nums.size();i++){
        if(nums[j] != nums[i]){
            val = nums[j];
            flag = 0;
            break;
        }
        j = j+2;
        i++;
    }
    if(flag){
        return nums[nums.size()-1];
    }
    return val;
}


                //xor with itself is 0;

int singleNumber(vector<int>& nums) {
    int ans=0;
    for(auto x:nums)
    ans^=x;
    return ans;
}
