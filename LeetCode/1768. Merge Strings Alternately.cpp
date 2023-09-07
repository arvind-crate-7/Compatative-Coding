class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        for(int i = 0;i<word1.size() || i<word2.size();i++){
            if(i<word1.size()){
                str = str + word1[i];
            }

            if(i<word2.size()){
                str = str + word2[i];
            }
        }
        return str;
        
    }
};
