#include<iostream>
using namespace std;
void move_negative_number_left(int *arr,int n){
    int in=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[in++]);
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    cout<<"Enter element:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move_negative_number_left(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
