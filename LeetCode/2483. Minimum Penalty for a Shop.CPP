class Solution {
public:
    int bestClosingTime(string customers) {
        int Y = 0;
        int N = 0;

        //finding total Y and total N
        for(int i = 0;i<customers.size();i++){
            if(customers[i] == 'Y'){
                Y++;
            }
            else{
                N++;
            }
        }

        int curr_y = 0;
        int curr_n = 0;
        int penalty = Y;

        int position = 0;

        for(int i = 0;i<customers.size();i++){
            if(customers[i] == 'Y'){
                curr_y++;
            }
            else{
                curr_n++;
            }

            int temp = Y - curr_y + curr_n;

            if(penalty > temp){
                penalty = temp;
                position = i + 1;
            }
        }
        return position;
    }
};
