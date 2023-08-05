#include<iostream>
using namespace std;
void merge_sort(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n  && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while (i<n)
    {
        arr3[k++]=arr1[i];
    }
    while (j<m)
    {
        arr3[k++]=arr2[j++];
    }   
}
void print(int arr[],int n,int m){
    for(int i=0;i<n+m;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,m;
    cout<<"Enter size of the both array:";
    cin>>n>>m;
    cout<<"Enter element of the first array:";
    int arr1[n],arr2[m],arr3[n+m]={0};
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter element of the second array:";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<endl;
    merge_sort(arr1,n,arr2,m,arr3);
    print(arr3,n,m);
}
