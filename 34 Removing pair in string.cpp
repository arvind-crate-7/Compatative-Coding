#include<iostream>
using namespace std;
string superReducedString(string s) {
     if (s.length() == 0)
    {
        return "Empty String";
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (i == s.length()-1)
        {
            return s;
        }
        if (s[i] == s[i+1])
        {
            s.erase(i,2);
            return superReducedString(s);
        }   
    }
    
    return "";

}
int main(){
    string s;
    cout<<"Enter string:";
    cin>>s;
    cout<<superReducedString(s);

}
