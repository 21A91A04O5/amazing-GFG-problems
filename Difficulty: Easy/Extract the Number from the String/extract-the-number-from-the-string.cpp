//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {
        long long ans=0,num=0,c=0;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]>='0' and sentence[i]<='9'){
                num=num*10+(sentence[i]-'0');
                if(sentence[i]=='9') c++;
            }
            else{
                if(c==0) ans=max(ans,num);
                num=0;
                c=0;
            }
        }
        if(c==0) ans=max(ans,num);
        if(ans==0)  return -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends