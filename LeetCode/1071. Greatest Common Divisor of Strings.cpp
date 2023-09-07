class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 == str2){
            return str1;
        }
        int size1 = str1.size();
        int size2 = str2.size();

        string ans;
        int i = 0;
        for(;i<size1 && i<size2;i++){
            if(str1[i] != str2[i]){
                break;
            }
            ans = str1[i];
        }

        if()
    }
};
