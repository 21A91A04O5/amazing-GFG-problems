//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {
        long long sum=0,ans=-1,f=INT_MIN;
        int j=0,c=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<0){
                f=max(sum,f);
                c++;
                sum=0;
            }
            ans=max(ans,sum);
        }
        if(c==n) return f;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends