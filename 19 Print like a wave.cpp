#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nrows, int mcols)
{
    //Write your code here
    vector<int> v;
    for(int i=0;i<mcols;i++){
        if(i & 1){
            for(int j=nrows-1;j>=0;j--){
                v.push_back(arr[j][i]);
            }
        }   
        else{
            for(int j=0;j<nrows;j++){
                v.push_back(arr[j][i]);
            }
        }
    }
    return v;
}
int main(){
    int rows,cols;
    cout<<"Enter number of the rows is array:";
    cin>>rows;
    cout<<endl;
    cout<<"Enter number of column in the array:";
    cin>>cols;
    cout<<"Enter "<<rows*cols<<" element:";
    vector<vector<int>> v(rows);
    for(int i=0;i<rows;i++){
        v[i].assign(cols,0);
        for(int j=0;j<cols;j++){
            cin>>v[i][j];
        }
    }
    vector<int> new1=wavePrint(v,rows,cols);
    cout<<endl;
    for(int i=0;i<new1.size();i++){
        cout<<new1[i]<<" ";
    }

}
