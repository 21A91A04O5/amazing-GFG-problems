//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string printString(string s, char ch, int count) {
        string ans="";
        int c=0;
        int a=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch) c++;
            if(c==count){ a=i; break;}
        }
        return (a==-1)?"":s.substr(a+1,s.size()-a-1);
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
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends