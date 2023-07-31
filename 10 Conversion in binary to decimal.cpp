#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter binary number for conversion:";
    cin>>n;
    int ans=0;
    int i=0;
    while(n)
    {
        int x=n%10;
        if(x==1)
        {
            ans=ans+(pow(2,i));
        }
        n=n/10;
        i++;
    }
    cout<<"The decimal value is:"<<ans;
}
