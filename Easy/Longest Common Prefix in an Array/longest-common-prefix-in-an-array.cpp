//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        if(N==1) return arr[0];
        int count=0;
        sort(arr,arr+N);
        // cout<<arr[0]<<" "<<arr[N-1];
        for(int i=0;i<min(sizeof(arr[0])/sizeof(arr[0][0]),sizeof(arr[N-1])/sizeof(arr[N-1][0]));i++){
            if(arr[0][i]==arr[N-1][i])
               count++;
            else
               break;
        }
        string ans="";
        for(int i=0;i<count;i++)
           ans+=arr[0][i];
        if(ans=="") return "-1";
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends