#include<bits/stdc++.h>
using namespace std;
int diagonalDifference(vector<vector<int>> arr) {
    int first_digonal=0,second_digonal=0;
    int diff;
    int size=arr.size()-1;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(i==j)
            {
                first_digonal=first_digonal+arr[i][j];
            }
            if(j==size-i)
            {
                second_digonal=second_digonal+arr[i][j];
            }
            
        }
    }
    diff=abs(first_digonal-second_digonal);
    return diff;
}
int main()
{
    vector<vector<int>> v;
    int N;
    cout<<"Enter Size of the matrix:";
    cin>>N;
    for(int k=0;k<N;k++)
    {
        vector<int> temp;
        for(int l=0;l<N;l++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<<"The difference of both digonal is:";
    cout<<diagonalDifference(v);
}
