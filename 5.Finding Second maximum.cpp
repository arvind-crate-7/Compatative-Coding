#include<bits/stdc++.h>
using namespace std;
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max=-1;
	    int secmax=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>max)
	        {
	            secmax=max;
	            max=arr[i];
	            
	        }
	        else if(arr[i]>secmax&&arr[i]!=max)
	        {
	            secmax=arr[i];
	        }
	    }
	    return secmax;
	}
};

main()
{
    int t;
    cout<<"Enter Number of test"<<"\n";
    cin>>t;
    Solution obj;
    while(t--)
    {
        cout<<"Enter size of  Array:"<<endl;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int result;
        result=obj.print2largest(arr,n);
        cout<<"The second max element is:";
        cout<<result<<endl;
    }

    


    return 0;
}
