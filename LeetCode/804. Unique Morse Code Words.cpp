#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string v[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> s;
        for(int i = 0;i<words.size();i++){
            string str = words[i];
            string conversion;

            for(int j = 0;j<str.size();j++){
                char ch = str[j];
                conversion = conversion + v[ch - 97];
            }
            s.insert(conversion);
        }
        return s.size();
    }
};
