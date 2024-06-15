//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool fun(vector<int>arr, int sum, int n,vector<vector<int>>& dp){
        if(sum==0) return true;
        if(n<0)  return false;
        if(dp[sum][n]!=-1) return dp[sum][n];
        if(arr[n]<=sum)
           return dp[sum][n]=fun(arr,sum-arr[n],n-1,dp) || fun(arr,sum,n-1,dp);
        else
           return dp[sum][n]=fun(arr,sum,n-1,dp);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        vector<vector<int>> dp(sum+1,vector<int>(arr.size()+1,-1));
        return fun(arr,sum,arr.size()-1,dp);
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