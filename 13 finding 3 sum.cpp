#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

    vector<vector<int>> ans;

 

    sort(arr.begin(), arr.end()); // sort the input array

 

    for(int i = 0; i < n-3; i++) {

        int left = i + 1;

        int right = n - 1;

 

        while( left < right) {

            int sum = arr[i] + arr[left] + arr[right];

 

            if (sum == K) {

                vector<int> temp = {arr[i], arr[left], arr[right]};

                ans.push_back(temp);

                left++;

                right--;

               

                // Ignore duplicate values for the second element

                while(left < right && arr[left] == arr[left-1]) {

                    left++;

                }

                // Ignore duplicate values for the third element

                while(left < right && arr[right] == arr[right+1]) {

                    right--;

                }

            } else if(sum < K) {

                left++;

            } else {

                right--;

            }

 

        }

        // Ignore duplicate values for the first element

        while( i + 1 < n && arr[i] == arr[i + 1]) {

            i++;

        }

    }

    return ans;

}
int main()
{
    int n;
    cout<<"Enter size of the array";
    cin>>n;
    cout<<"Enter element:";
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target for 3 sum:";
    cin>>target;
    cout<<"The sum of("<<target<<")element is:";
    vector<vector<int>> it=findTriplets(arr,n,target);
    for(auto itt=it.begin();itt<it.end();itt++)
    {
        cout<<(*itt)<<" ";
    }

}
