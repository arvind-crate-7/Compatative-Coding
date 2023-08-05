#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else if(b%2 != 0){
        return a*ans*ans;
    }

}
int main(){
    int a,b;
    cout<<"enter A and B:";
    cin>>a>>b;
    cout<<power(a,b);
}
