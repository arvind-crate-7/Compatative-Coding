#include<iostream>
#include<vector>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
        //code here
    vector<int> arr(100000,0);
    int result=0;
    for(int i=0;i<n || i<m;i++){
        if(i<n){
            if(arr[a[i]]==0){
                arr[a[i]]=1;
                result++;
            }
        }
        if(i<m){
            if(arr[b[i]]==0){
                arr[b[i]]=1;
                result++;
            }
        }
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter size of the first array:";
    cin>>n;
    cout<<"Enter first array element:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n1;
    cout<<"Enter size of the second array:";
    cin>>n1;
    cout<<"Enter second array element:";
    int arr1[n];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int size=doUnion(arr,n,arr1,n1);
    cout<<"Size of the uion array is:"<<size;
}
