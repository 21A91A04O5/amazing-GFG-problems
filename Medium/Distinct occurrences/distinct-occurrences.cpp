//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int mod =1e9+7;
    // int fun(int i,string s,string t,string k){
    //     // if(k==t) return 1;
    //     // if(i>=s.size()) return 0;
    //     // int pick=0;
    //     // if(i<s.size())pick=fun(i+1,s,t,k+s[i]);
    //     // int non_pick=fun(i+1,s,t,k);
    //     // return pick+non_pick;
    // }
    int fun(int i, int j, int n, int m, string &s, string &t,vector<vector<int>>&dp){
        if(j>=m)return 1;
        if(i>=n)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int notake=0+fun(i+1,j,n,m,s,t,dp);
        int take=0;
        if(s[i]==t[j]){
            take=0+fun(i+1,j+1,n,m,s,t,dp);
        }
        return dp[i][j]=(notake+take)%mod;
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
        //  return fun(0,s,t,"");
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return fun(0,0,n,m,s,t,dp);
    }
};
 




//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends