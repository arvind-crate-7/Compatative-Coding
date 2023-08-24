#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> v(2);
        int last_width = 0;
        int total_width = 0;
        int total_line = 0;
        for(int i = 0;i<s.size();i++){
            bool flag = 0;
            char c= s[i];
            if(total_width > 100 || flag){
                if(total_width > 100){
                    total_width = total_width - widths[s[i-1] - 97];
                    --i;
                }
                last_width = total_width;
                total_line++;
                total_width = 0;
            }
            else{
                total_width = total_width + widths[c-97];
                if(total_width > 100){
                    --i;
                    flag = 1;
                }
            }
        }
        if(total_width >0){
            total_line++;
            last_width = total_width;
        }
        v[0] = total_line;
        v[1] = last_width;
        return v;
    }
};







                    //        Another approach

                    
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int cnt=1, currSum=0;
    
        for (int i=0;i<s.size();i++) {
            currSum += widths[s[i]-'a'];
            if(currSum > 100) {
                currSum = widths[s[i]-'a'];
                cnt++;
            }
        }
        
        return {cnt,currSum};
        
    }
};
