#include<bits/stdc++.h>
using namespace std;
int find_pivot(int arr[],int n)
{
    int s=0,e=n-1;
    int mid;
    while(s<e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}
int main()
{
    int arr[5]={7,9,1,2,3};
    cout<<"The pivot element is at index:"<<find_pivot(arr,5);
}
