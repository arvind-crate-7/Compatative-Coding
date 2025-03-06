vector<int> twoSum(vector<int>& numbers, int target) {
      int left = 0;
      int right = numbers.size() - 1;
  
      while (left < right) {
          int total = numbers[left] + numbers[right];
  
          if (total == target) {
              return {left + 1, right + 1};
          } else if (total > target) {
              right--;
          } else {
              left++;
          }
      }
      return {-1, -1}; // If no solution is found 
  }


//second method

   vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index;
        for(int i = (numbers.size()-1);i>=0;i--){
            int val =  target- numbers[i];
            int low = 0,high = i;
            bool flag = 0;
            int index2;
            while(low<=high ){
                int mid = (low + high)/2;
                if(numbers[mid]<val){
                    low= mid+1;
                }
                else if(numbers[mid]>val){
                    high = mid-1;
                }
                else{
                    index2 = mid;
                    flag = 1;
                    break;
                }
            }
            if(flag){
                index.push_back(index2 +1);
                index.push_back(i+1);
                break;
            }

        }
        return index;
    }
