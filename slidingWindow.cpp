// this algo helps us to solve questions like max/mini subarraysum of k element in an array
#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[],int n,int k)
{
    // initialized two variables
   int maxsum=0;
    int window_sum=0;
    // firstly getting the first k element sum of the array
    for(int i=0;i<k;i++)
    {
        maxsum+=arr[i];
    }
    // updating it in windowsum
        window_sum=maxsum;
    // in this loop we are adding next element and removing the first one and checking if it becomes the maximum one by the next line
     for(int j=k;j<n;j++)
       {
          window_sum+=arr[j]-arr[j-k];
          maxsum=max(maxsum,window_sum);
       }
    return maxsum;
}
int main()
{
    // input : n as size of array & k as subarray size.
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<max_sum(arr,n,k)<<endl;
    return 0;
}