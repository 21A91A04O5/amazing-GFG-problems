//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int knapSack(int W, int wt[], int val[], int n) {
        vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<W+1;j++){
                if(i==0 or j==0) dp[i][j]=0;
                else{
                    if(wt[i-1]<=j){
                        dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                    }
                    else dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][W];
    }
    
    //Function to return max value that can be put in knapsack of capacity W.
    // int knap(int wt[],int val[],int W,int n,vector<vector<int>>& dp){
    //     if(W==0 or n==0) return 0;
    //     if(dp[n][W]!=-1) return dp[n][W];
    //     if(wt[n-1]<=W)
    //         return dp[n][W]=max(val[n-1]+knap(wt,val,W-wt[n-1],n-1,dp),knap(wt,val,W,n-1,dp));
    //     else
    //         return dp[n][W]=knap(wt,val,W,n-1,dp);
    // }
    
    // int knapSack(int W, int wt[], int val[], int n) 
    // { 
    //     vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
    //     // return knap(wt,val,W,n,dp);
    //     for(int i=0;i<n+1;i++){
    //         for(int j=0;j<W+1;j++){
    //             if(i==0 or j==0) dp[i][j]=0;
    //             else if(wt[i-1]<=j)
    //               dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
    //             else
    //               dp[i][j]=dp[i-1][j];
    //         }
    //     }
    //     return dp[n][W];
    // }
    
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends