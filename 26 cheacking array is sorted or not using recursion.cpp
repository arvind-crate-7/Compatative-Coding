#include<iostream>
using namespace std;
bool checkingsorted(int arr[],int size){
    int ans;
    if(size==0 || size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        ans=checkingsorted(arr+1,size-1);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    //For practice i use dynamic alloction;
    int *arr=new int[n];
    cout<<"Enter element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=checkingsorted(arr,n);
    if(ans){
        cout<<"Array is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }
    delete []arr;
}
