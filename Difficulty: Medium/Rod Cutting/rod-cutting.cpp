//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        int size=n;
        vector<vector<int>> dp(size+1,vector<int>(n+1)); //n -> inches
        for(int i=0;i<size+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 or j==0) dp[i][j]=0;
                else{
                    if(i<=j)
                        dp[i][j]=max(price[i-1]+dp[i][j-i],dp[i-1][j]);
                    else dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[size][n];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends