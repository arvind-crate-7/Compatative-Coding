#include<bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> v){
    int x=v.size();
    vector<int> nge(x);
    stack<int> st;
    for(long it=0;it<x;++it)
    {
        while(!st.empty()&&v[it]>v[st.top()])
        {
            nge[st.top()]=it;
            st.pop();
        }
        st.push(it);
    }
    while(!st.empty())
    {
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter Element:";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];    
    }
    vector<int> nge=NGE(v);
    cout<<"Result:"<<endl;
    for(int i=0;i<n;++i)
    {
        cout<<v[i]<<" "<<(nge[i]==-1?-1:v[nge[i]])<<endl;
    }
    return 0;
}
