//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        if(d*9<s) return "-1";
        string ans="";
        int rem=s%9;
        int div=s/9;
        if(rem==0){
            if(d==1) return "9";
            else{
                if(div==d){ for(int i=0;i<d;i++) ans+='9'; return ans; }
                while(div>1){ ans+='9'; div--; d--;}
                if(d>div){
                    ans='8'+ans;
                    d--;
                    for(int i=0;i<d-1;i++){
                        ans='0'+ans;
                    }
                    ans='1'+ans;
                }
            }
        }
        else{
            if(d==1) return to_string(rem);
            for(int i=0;i<div;i++){
                ans+="9";
                d--;
            }
            if(d==1){ ans=to_string(rem)+ans; return ans;}
            ans=to_string(rem-1)+ans;
            d--;
            while(d>1){
                ans='0'+ans;
                d--;
            }
            ans='1'+ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends