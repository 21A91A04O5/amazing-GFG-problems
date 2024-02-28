//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int a=0,c=1;
        // if(s.length()<=2)
        for(int i=s.length()-1;i>=s.length()-3,i>=0;i--){
            a=a+(s[i]-'0')*c;
            c*=10;
        }
        if(a%8==0) return 1;
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends