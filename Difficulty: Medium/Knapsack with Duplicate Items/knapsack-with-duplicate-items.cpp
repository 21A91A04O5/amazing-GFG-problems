//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knap(int wt[],int val[],int W,int n,vector<vector<int>>& dp){
     if(W==0 or n==0) return 0;
     if(dp[n][W]!=-1) return dp[n][W];
     if(wt[n-1]<=W)
         return dp[n][W]=max(val[n-1]+knap(wt,val,W-wt[n-1],n,dp),knap(wt,val,W,n-1,dp));
     else
         return dp[n][W]=knap(wt,val,W,n-1,dp);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(N+1,vector<int>(W+1,-1));
        return knap(wt,val,W,N,dp);
        // vector<vector<int>> dp(N+1,vector<int>(W+1));
        // for(int i=0;i<=N;i++){
        //     for(int j=0;j<=W;j++){
        //         if(i==0 or j==0) dp[i][j]=0;
        //         else{
        //             if(wt[i-1]<=j){
        //                 dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
        //             }
        //             else dp[i][j]=dp[i-1][j];
        //         }
        //     }
        // }
        // return dp[N][W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends