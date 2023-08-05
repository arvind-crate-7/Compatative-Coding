// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10&leftPanelTab=0

//problem link

#include <bits/stdc++.h> 
using namespace std;
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter destination Stairs:";
    cin>>n;
    cout<<"There are "<<countDistinctWays(n)<<" ways to reach to destination:"<<endl;
}
