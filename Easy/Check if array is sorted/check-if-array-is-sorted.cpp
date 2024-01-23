//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool array_sorted(int *arr,int size){
        //base case -> last ele can not be compared with anything and size may be zero
        if(size==0 || size==1)  
           return true;
        if(arr[0]>arr[1])
           return false;
        return array_sorted(arr+1,size-1);
    }
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        return array_sorted(arr,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends