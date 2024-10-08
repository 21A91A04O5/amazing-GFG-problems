//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {
        vector<vector<long long>> dp(N+1,vector<long long>(sum+1));
        for(int i=0;i<N+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j==0) dp[i][j]=1;
                else if(i==0) dp[i][j]=0;
                else{
                    if(coins[i-1]<=j){
                        dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
                    }
                    else dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends