#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
    string ans ;
    int carry = 0;

    int i = a.size() - 1;
    int j = b.size() - 1;
    while(carry || i >= 0 || j >= 0){
        if(i >= 0){
            carry = carry + a[i--] - '0';
        }
        if(j >= 0){
            carry = carry + b[j--] - '0';
        }
        ans += carry % 2 + '0';
        carry = carry / 2;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string a,b;
    cout<<"Enter first binary number:";
    cin>>a;
    cout<<"Enter second binary number:";
    cin>>b;

    cout<<"The addition of "<<a<<"+ "<<b<<" is: "<<addBinary(a,b);
}
