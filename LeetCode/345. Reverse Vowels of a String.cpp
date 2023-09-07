class Solution {
public:
    string reverseVowels(string s) {
        
        vector<char> v;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
              || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
                v.push_back(s[i]);
        }
        reverse(v.begin(), v.end());
        int rev = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
              || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
                s[i] = v[rev];
                rev++;
            }
        }
        return s;
    }
};



                    //approach 2

class Solution {
public:
    string reverseVowels(string s) {
        string str = "aeiouAEIOU";
        map<char,bool> m;
        for(int i = 0;i<10;i++){
            m[str[i]] = 1;
        }
        int size = s.size();
        int k = size - 1;
        for(int i = 0;i<size && i<=k;i++){
            if(m[s[i]]){
                while(!m[s[k]] && k >= i){
                    k--;
                }
                char ch = s[k];
                s[k] = s[i];
                s[i] = ch;
                k--;
            }
        }
        return s;
    }
};
