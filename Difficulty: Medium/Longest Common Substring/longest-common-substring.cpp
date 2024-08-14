//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        int a=str1.size(),b=str2.size(),ans=0;
        vector<vector<int>> dp(a+1,vector<int>(b+1));
        for(int i=0;i<a+1;i++){
            for(int j=0;j<b+1;j++){
                if(i==0 and j==0) dp[i][j]=0;
                else{
                    if(str1[i-1]==str2[j-1]){
                        dp[i][j]=1+dp[i-1][j-1];
                        ans=max(ans,dp[i][j]);
                    }
                    else dp[i][j]=0;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends