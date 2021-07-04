// Kadane algo helps us to solve questions like maximum/minimum subarraysum (subarray will be in Contiguous) in an array
#include<bits/stdc++.h>
using namespace std;
// defining a function to return maximum subarray sum
int maxsubarraysum(int arr[],int n)
{
    // initialize two variables as follows
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++)
    {
        // we will keep adding element to 'currsum' until it becomes negative
        currsum+=arr[i];
        // asinging the value of currsum to maxsum if it's greater
        if(currsum>maxsum)
        maxsum=currsum;
        // as soon as  cursum's value was found negative,make its value zero
        if(currsum<0)
        currsum=0;
    }
    return maxsum;
}
int main()
{
    // taking input of size of array and its elements
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxsubarraysum(arr,n)<<endl;
    return 0;
}