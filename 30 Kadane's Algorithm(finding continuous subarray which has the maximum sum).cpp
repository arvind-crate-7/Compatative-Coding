//Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

#include<iostream>
using namespace std;
long long maxSubarraySum(int arr[], int n){
        
     // Your code here
    int sum=0;
    int maxi=arr[0];
    
    for(int i=0;i<n;i++){
        sum +=arr[i];
        maxi=max(maxi,sum);
        
        if(sum<0)
        sum=0;
    }
    return maxi;
    
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
    long long sum=maxSubarraySum(arr,n);
    cout<<"the maximum sum of subarray:"<<sum;
}
