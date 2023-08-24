#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
bool allelement(vector<char> v,string s){
    for(int i = 0;i<v.size();i++){
        bool flag = 0;
        for(int j = 0;j<s.size();j++){
            if(v[i] == s[j]){
                flag = 1;
                s.erase(j,1);
                break;
            }
        }
        if(flag == 0)
            return 0;
    }
    return 1;
}
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<char> v;
        for(int i = 0;i<licensePlate.size();i++){
            char ch = tolower(licensePlate[i]);
            if(ch >= 'a' && ch <= 'z'){
                v.push_back(ch);
            }
        }

        string ans;
        int size = INT_MAX;

        for(int i = 0;i<words.size();i++){
            string s = words[i];
            if(allelement(v,s) && (s.size() < size)){
                size  = s.size();
                ans = s;
            }
        }
        return ans;
    }
};
