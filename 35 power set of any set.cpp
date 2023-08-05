#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums,vector<vector<int>> &ans,vector<int> output,int index){
    if(index >= nums.size()){
        ans.push_back(output);
        return ;
    }

    //exclude
    solve(nums,ans,output,index+1);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums,ans,output,index+1);
}
void subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int index=0; 
    solve(nums,ans,output,index);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i] [j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    subsets(v);
    
}
