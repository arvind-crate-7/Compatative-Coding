/*

In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers, a and b (a<=b), separated by a newline.

Output Format

For each integer  in the inclusive interval [a,b]:

If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for 1 , "two" for 2, and so on.
Else n>9 if  and it is an even number, then print "even".
Else n>9 if  and it is an odd number, then print "odd".
Note: [a,b]={x belong to z| a<=x<=b}={a,a+1,....b}



Sample Input

8
11
Sample Output

eight
nine
even
odd

*/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string str[]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;++i)
    {
        if(1<=i and i<=9)
        {
            cout<<str[i-1]<<endl;
        }
        else
        {
            if(i%2==0)
            {
                cout<<"even"<<endl;
            }
            else 
            {
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}
