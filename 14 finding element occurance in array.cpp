#include <bits/stdc++.h> 
using namespace std;
int firstAndLastPosition(int arr[], int n, int k)
{
    // Write your code here
    int left=0,right=n-1;
    int ans;
    int mid;
    pair<int,int> pa;
    while(n--)
    {
        mid=left+(right-left)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            right=mid-1;
        }
        else if(arr[mid]<k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return ans;
}
int LastPosition(int arr[], int n, int k)
{
    // Write your code here
    int left=0,right=n-1;
    int ans;
    int mid;
    pair<int,int> pa;
    while(n--)
    {
        mid=left+(right-left)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            left=mid+1;
        }
        else if(arr[mid]<k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter size of the array";
    cin>>n;
    cout<<"Enter element:";
    int  arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element you want check her occurance:";
    int k;
    cin>>k;
    cout<<"The first occurance of element "<<k<<" is at index: "<<firstAndLastPosition(arr, n , k)<<endl;
    cout<<"The first occurance of element "<<k<<" is at index: "<<LastPosition(arr, n , k)<<endl;;

}
