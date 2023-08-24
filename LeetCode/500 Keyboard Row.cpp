#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
bool checkrange(vector<char> ch,char c){
    for(int i = 0;i<ch.size();i++){
        char ch1 = toupper(ch[i]);
        if(c == ch[i] || c == ch1){
            return 1;
            break;
        }
    }
    return 0;
}
bool is_word_in_any_one_row(string s){
    vector<char> ch1 = {'q','w','e','r','t','y','u','i','o','p'};
    vector<char> ch2 = {'a','s','d','f','g','h','j','k','l'};
    vector<char> ch3 = {'z','x','c','v','b','n','m'};

    int size1 = 0;
    int size2 = 0;
    int size3 = 0;



    for(int i =0;i<s.size();i++){
        if(checkrange(ch1,s[i]))
            size1++;
        else if(checkrange(ch2,s[i]))
            size2++;
        else if(checkrange(ch3,s[i]))
            size3++;   
    }
    if(size1 == s.size() ||size2 == s.size() ||size3 == s.size()){
        return 1;
    }
    return 0;
}
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> st;

        for(int i = 0;i<words.size();i++){
            string s = words[i];
            if(is_word_in_any_one_row(s)){
                st.push_back(s);
            }
        }
        return st;
    }
};
