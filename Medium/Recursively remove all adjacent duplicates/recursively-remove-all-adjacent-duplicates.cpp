//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        // code here
        // int n=s.size();
        // string ans="";
        // for(int i=0;i<n;i++){
        //     if((s[i]==s[i-1])||(s[i]==s[i+1])){
        //         continue;
        //     }
        //     else{
        //         ans+=s[i];
        //     }
        // }
        // cout <<s<<" "<<ans<<"\n";
        // if(ans.size()==s.size()){
        //     return ans;
        // }
        // else{
        //     s=ans;
        //     rremove(s);
        // }
        int n = s.size();
        string ans = "";
    
        for (int i = 0; i < n; i++) {
            if ((i > 0 && s[i] == s[i - 1]) || (i < n - 1 && s[i] == s[i + 1])) {
                continue;
            } else {
                ans += s[i];
            }
        }
    
    
        if (ans.size() == s.size()) {
            return ans;
        } else {
            return rremove(ans);  // Return the result of the recursive call
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends