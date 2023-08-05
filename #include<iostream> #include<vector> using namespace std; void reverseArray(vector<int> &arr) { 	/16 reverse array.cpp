#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &arr)
{
	// Write your code here.
	int start=0,end=arr.size()-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    cout<<"Enter element:";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverseArray(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
