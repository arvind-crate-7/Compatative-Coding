#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number decimal for conversion in binary number:";
    cin>>n;
    //assign number for using another method.
    int n2=n;
    int a[10];
    int i=0;
    while(n)
    {
        int x=n%2;
        n=n/2;
        a[i]=x;
        i++;
    }
    cout<<"Answer is:";
    for(int j=i-1;j>=0;--j)
    {
        cout<<a[j];
    }
    cout<<endl;

    //Another method to find binary
    int ans=0,j=0;
    while(n2)
    {
        int bit=n2 & 1;
        ans=(bit*pow(10,j))+ans;
        n2=n2>>1;
        j++;
    }
    cout<<"Answer is:"<<ans<<endl;
}
