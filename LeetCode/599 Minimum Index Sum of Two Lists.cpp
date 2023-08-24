#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n = list1.size(), m = list2.size();
        unordered_map<string,int> first;
        for(int i=0; i<n; ++i) first.insert({list1[i],i+1});
        vector<pair<string,int>> v;
        vector<string> ans;
        for(int i=0; i<m; ++i){
            int x = first[list2[i]];
            if(x) v.push_back({list2[i],x+i-1});
        }
        int mn = INT_MAX;
        for(auto &[x,y]: v) mn = min(mn,y);
        for(auto [s,x]: v) if(x == mn) ans.push_back(s);
        return ans;
    
        
    }
};





                                    // Another method




class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        //initilize index sum
        int index_sum = 1000000;

        vector<string> ans;

        //finding size of the lists
        int size1 = list1.size();
        int size2 = list2.size();

        vector<pair<int,string>> v;

        for(int i = 0;i<size2;i++){
            string s2 = list2[i];

            for(int j = 0;j< size1;j++){
                string s1 = list1[j];
                int index = i+j;
                if(s1 == s2 && index <= index_sum ){
                    index_sum = index;
                    v.push_back({index_sum,s1});
                }
            }
        }
        sort(v.begin(),v.end());
        ans.push_back(v[0].second);
        int i = 1;
        while( i<v.size() && v[i].first ==v[0].first){
            ans.push_back(v[i].second);
            i++;
        }
        return ans;
    }
};
