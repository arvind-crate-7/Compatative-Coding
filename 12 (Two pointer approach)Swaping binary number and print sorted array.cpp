#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sortone(int arr[],int n1)
{
    int left=0,right=n1-1;
    while(left<right)
    {
        while(arr[left]==0&&left<right)
        {
            left++;
        }
        while(arr[right]==1&&left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    printarray(arr,7);
}
int main()
{
    int arr[7]={1,0,1,1,1,0,0};
    sortone(arr,7);
}
