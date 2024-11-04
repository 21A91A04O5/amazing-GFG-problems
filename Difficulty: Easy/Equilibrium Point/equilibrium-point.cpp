//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int equilibriumPoint(vector<int> &arr) {
        // code here
        int n=arr.size();
        int prefix[n];
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        for(int i=0;i<n;i++){
            if(i==0 and prefix[n-1]-prefix[i]==0) return i+1; 
            else if(prefix[i-1]==prefix[n-1]-prefix[i]) return i+1;
        }
        return -1;
    //          [1 3 5 2 2]
        
    // prefix = [1 4 9 11 13]
    //   ls  =    1 4 9      prefix[i-1] 
    //   rs  =    9 4 4      prefix[n-1]-prefix[i]
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends