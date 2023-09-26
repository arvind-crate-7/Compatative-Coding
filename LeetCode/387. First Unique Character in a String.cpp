class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        char ch;
        for(int i=0;i<s.length();i++){
            ch=s[i];
            if(hash[ch-'a']==1)
            return i;
        }
        return -1;
    }
};
