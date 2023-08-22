int majorityElement(vector<int>& nums) {
        int cnt=0;
       int n=nums.size();
       int el;

       for(int i=0;i<n;i++){
           if(cnt==0){
               el=nums[i];
               cnt++;
           }else if(nums[i]==el) cnt++;
           else cnt--;
       }
       int ans=-1;
       cnt=0;
       for(int i=0;i<n;i++){
           if(nums[i]==el) cnt++;
       }
       if(cnt>n/2)
       return el;

       return ans;
        
    }
