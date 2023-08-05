#include<iostream>
using namespace std;
void Reverse_string_recursion(string& s, int i ,int j){
    if(i>j){
        return ;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    Reverse_string_recursion(s,i,j);

}
int main(){
    cout<<"Enter string :";
    string s;
    cin>>s;
    Reverse_string_recursion(s,0,s.size()-1);
    cout<<s;
}
