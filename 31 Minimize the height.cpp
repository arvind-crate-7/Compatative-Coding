// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.
#include<iostream>
#include<algorithm>
using namespace std;
int getMinDiff(int arr[], int n, int k) {
         // code here
    sort(arr,arr+n);
    int mini=arr[0];
    int maxi=arr[n-1];
    int ans=maxi-mini;
    for(int i=1;i<n;i++)
    {
        if(arr[i]-k<0)
        continue;
            mini=min(arr[0]+k,arr[i]-k);
            maxi=max(arr[i-1]+k,arr[n-1]-k);
            ans=min(ans,maxi-mini);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter element:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of K";
    int k;
    cin>>k;
    cout<<getMinDiff(arr,n,k);
    
}
