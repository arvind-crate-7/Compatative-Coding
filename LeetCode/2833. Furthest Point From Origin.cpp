class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
        for(int i = 0;i<moves.size();i++){
            if(moves[i] == 'L'){
            n1++;
            }
            else if(moves[i] == '_'){
                n3++;
            }
                else{
                    n2++;
                }
        }
        return abs(n1 - n2) + n3;
        
    }
};
