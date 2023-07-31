#include<bits/stdc++.h>
using namespace std;
string timeConversion(string s) {    
    int size = s.length();
    string Hour24;
    if(s[size-2] == 'A'){
        // str.substr(start, length);
        string hh = s.substr(0,2);
        // stoi: convert string to int 
        int h = stoi(hh);
        if(h == 12){
            string newHour = "00";
            Hour24 = newHour.append(s.substr(2,6));            
        }
        else{
            Hour24 = s.substr(0,size-2);            
        }
        
    }
    if(s[size-2] == 'P'){
        string hh = s.substr(0,2);
        // stoi: convert string to int 
        int h = stoi(hh);
        if(h == 12){
            Hour24 = s.substr(0,size-2);            
        }
        else{
            int newh = h + 12;
            string newHour = to_string(newh);
            Hour24 = newHour.append(s.substr(2,6));            
        }
    }
    return Hour24;
}

int main()
{
    string  time1;
    cout<<"Enter Time for conversinon(Ex:12:40:21AM)  :";
    cin>>time1;
    cout<<"Converted time into railway time:"<<timeConversion(time1);
}
