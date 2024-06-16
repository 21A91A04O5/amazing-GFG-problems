//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    // bool fun(vector<int>arr, int sum, int n,vector<vector<int>>& dp){
    //     if(sum==0) return true;
    //     if(n<0)  return false;
    //     if(dp[n][sum]!=-1) return dp[sum][n];
    //     if(arr[n]<=sum)
    //       return dp[n][sum]=fun(arr,sum-arr[n],n-1,dp) || fun(arr,sum,n-1,dp);
    //     else
    //       return dp[n][sum]=fun(arr,sum,n-1,dp);
    // }
    bool isSubsetSum(vector<int>arr, int sum){
        vector<vector<bool>> dp(arr.size()+1,vector<bool>(sum+1,false));
        // return fun(arr,sum,arr.size()-1,dp);
        for(int i=0;i<=arr.size();i++){
            for(int j=0;j<=sum;j++){
                if(j==0)  dp[i][j]=true;
                else if(i==0)  dp[i][j]=false;
                else if(arr[i-1]<=j)  
                  dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
                else
                  dp[i][j]=dp[i-1][j];
            }
        }
        return dp[arr.size()][sum];
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends