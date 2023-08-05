#include<iostream>
using namespace std;
int sum_of_array(int *arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum=0;
    sum=arr[0]+sum_of_array(arr+1,n-1);
    return sum;
}
int main(){
    int n;
    cout<<"Enter  size of the array:";
    cin>>n;
    cout<<"Enter  element:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val=sum_of_array(arr,n);
    cout<<val;
}
