//gcd :- greatest common devisior
//Also called hcf(hghest common factor)

#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b){
    if(a==0)
        return b;
    if(b==0){
        return a;
    }
    while (a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
    
}
int main(){
    int a,b;
    cout<<"Enter both element for finding GCD:";
    cin>>a>>b;
    int val=gcd(a,b);
    cout<<"The GCD value is "<<val;
}
