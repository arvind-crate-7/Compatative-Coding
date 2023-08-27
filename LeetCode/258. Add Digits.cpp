class Solution {
public:
    int addDigits(int num) {
        while(num / 10 != 0){
            int temp = num;
            int sum = 0;
            while(temp){
                int val = temp % 10;
                sum = sum + val;
                temp = temp /10;
            }
            num = sum;
        }
        return num;
    }
};
