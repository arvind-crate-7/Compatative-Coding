class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed[0] == 0 && (flowerbed.size() == 1|| flowerbed[1] == 0 )&& n){
            n--;
            flowerbed[0] = 1;
        }
        for(int i = 1;i<flowerbed.size() - 1 && n > 0;i++){
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                n--;
                flowerbed[i] = 1;
            }
        }

        if(n > 0 && flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size() - 2] == 0){
            n--;
        }
        if(n == 0){
            return 1;
        }
        return 0;
    }
};
