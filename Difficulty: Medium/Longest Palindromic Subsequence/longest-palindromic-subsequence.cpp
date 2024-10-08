//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    string rev(string A){
        string ans="";
        for(int i=A.size()-1;i>=0;i--){
            ans+=A[i];
        }
        return ans;
    }
    int longestPalinSubseq(string A) {
        string B=rev(A);
        int m=A.size(),n=A.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 or j==0) dp[i][j]=0;
                else if(A[i-1]==B[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends