//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool pali(string a){
        string b=a;
        reverse(b.begin(),b.end());
        return a==b;
    }
    void fun(vector<vector<string>>& ans,vector<string>& v,string S,int idx){
        if(idx==S.size()){
           ans.push_back(v);
           return;
        }
        for(int i=idx;i<=S.size();i++){
            string a=S.substr(idx,i+1-idx);
            if(pali(a)){
                v.push_back(a);
                fun(ans,v,S,i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        vector<string> v;
        vector<vector<string>> ans;
        fun(ans,v,S,0);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends