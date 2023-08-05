#include<iostream>
using namespace std;
char getMaxOccuringChar(string s)
{
    // Your code here
    int arr[26]={0};
    for(int i=0; i<s.size(); i++){
        char ch=s[i];
        int number=0;
        number=ch - 'a';
        arr[number]++;
    }
    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    char finalanswer='a'+ans;
    return finalanswer;
}
int main(){
    string s;
    cout<<"Enter string:";
    cin>>s;
    cout<<"The maximum occuring element is:"<<getMaxOccuringChar(s);
}
