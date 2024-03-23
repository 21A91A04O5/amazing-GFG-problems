//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        vector<int> ans(n+1);
        int mod=1e9+7;
        int a=0,b=1,c;
        if(n==0) ans[0]=a;
        else{
            ans[0]=a;
            ans[1]=b;
            int i=2;
            while(i!=n+1){
                c=(a%mod+b%mod)%mod;
                ans[i]=c;
                a=b;
                b=c;
                i++;
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
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends